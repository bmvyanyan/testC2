package main

import (
	"errors"

	adaptix "github.com/Adaptix-Framework/axc2"
)

type Teamserver interface {
	TsAgentIsExists(agentId string) bool
	TsAgentCreate(agentCrc string, agentId string, beat []byte, listenerName string, ExternalIP string, Async bool) (adaptix.AgentData, error)
	TsAgentProcessData(agentId string, bodyData []byte) error
	TsAgentSetTick(agentId string, listenerName string) error
	TsAgentGetHostedAll(agentId string, maxDataSize int) ([]byte, error)
}

type PluginListener struct{}

type Listener struct {
	http *HTTP
}

var (
	ModuleDir       string
	ListenerDataDir string
	Ts              Teamserver
)

func InitPlugin(ts any, moduleDir string, listenerDir string) adaptix.PluginListener {
	ModuleDir = moduleDir
	ListenerDataDir = listenerDir
	Ts = ts.(Teamserver)
	return &PluginListener{}
}

func (p *PluginListener) Create(name string, config string, customData []byte) (adaptix.ExtenderListener, adaptix.ListenerData, []byte, error) {
	listenerData, customDataOut, listenerObject, err := HandlerCreateListenerData(name, config, customData)
	if err != nil {
		return nil, listenerData, customDataOut, err
	}

	return &Listener{http: listenerObject}, listenerData, customDataOut, nil
}

func (l *Listener) Start() error {
	if l.http == nil {
		return errors.New("listener not initialized")
	}

	return l.http.Start(Ts)
}

func (l *Listener) Edit(config string) (adaptix.ListenerData, []byte, error) {
	if l.http == nil {
		return adaptix.ListenerData{}, nil, errors.New("listener not initialized")
	}

	return HandlerEditListenerData(l.http, config)
}

func (l *Listener) Stop() error {
	if l.http == nil {
		return errors.New("listener not initialized")
	}

	return l.http.Stop()
}

func (l *Listener) GetProfile() ([]byte, error) {
	if l.http == nil {
		return nil, errors.New("listener not initialized")
	}

	return HandlerListenerGetProfile(l.http)
}

func (l *Listener) InternalHandler(data []byte) (string, error) {
	return "", nil
}
