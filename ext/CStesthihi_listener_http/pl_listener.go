package main

import (
	"bytes"
	"encoding/json"
	"errors"
	"fmt"

	adaptix "github.com/Adaptix-Framework/axc2"
)

// HandlerListenerValid validates listener configuration before creation.
// Called by Adaptix when user submits the listeLet’s start with the HandlerListenerValid function in pl_listener.go. This function acts as a gatekeeper for listener creation. It validates the JSON configuration submitted through the UI, checks required fields and basic semantics, and returns clear errors when submissions are invalid.ner creation form.
// Checks that all required fields are present and valid.
// Returns error if validation fails, nil if configuration is valid.
func validConfig(data string) error {

	/// START CODE HERE

	var conf HTTPConfig
	err := json.Unmarshal([]byte(data), &conf)
	if err != nil {
		return err
	}

	if conf.HostBind == "" {
		return errors.New("host_bind is required")
	}

	if conf.PortBind < 1 || conf.PortBind > 65535 {
		return errors.New("port_bind must be in range 1-65535")
	}

	if conf.CallbackAddress == "" {
		return errors.New("callback_address is required")
	}

	if conf.ApiPath == "" {
		return errors.New("api_path is required")
	}

	/// END CODE

	return nil
}

// HandlerCreateListenerDataAndStart creates and starts a new listener instance.
// This is the main initialization function called when a listener is created.
// Parameters:
//   - name: Unique identifier for this listener instance
//   - configData: JSON-encoded configuration from the UI
//   - listenerCustomData: Optional custom data from previous session (unused)
//
// Returns:
//   - ListenerData: Metadata for Adaptix UI (bind address, port, status)
//   - customData: Serialized config to persist across restarts
//   - listenerObject: The actual HTTP server instance
//   - error: If initialization or startup fails
func HandlerCreateListenerData(name string, configData string, listenerCustomData []byte) (adaptix.ListenerData, []byte, *HTTP, error) {
	var (
		listenerData adaptix.ListenerData
		customdData  []byte
	)

	/// START CODE HERE

	var (
		listener *HTTP
		conf     HTTPConfig
		err      error
	)

	if listenerCustomData == nil {
		err = validConfig(configData)
		if err != nil {
			return listenerData, customdData, nil, err
		}

		err = json.Unmarshal([]byte(configData), &conf)
		if err != nil {
			return listenerData, customdData, nil, err
		}
	} else {
		err = json.Unmarshal(listenerCustomData, &conf)
		if err != nil {
			return listenerData, customdData, nil, err
		}
	}

	listener = &HTTP{
		Config: conf,
		Name:   name,
		Active: false,
	}

	listenerData = adaptix.ListenerData{
		BindHost:  conf.HostBind,
		BindPort:  fmt.Sprintf("%d", conf.PortBind),
		AgentAddr: conf.CallbackAddress,
		Status:    "Stopped",
	}

	// Save config to customData
	var buffer bytes.Buffer
	err = json.NewEncoder(&buffer).Encode(conf)
	if err != nil {
		return listenerData, customdData, nil, err
	}
	customdData = buffer.Bytes()

	/// END CODE

	return listenerData, customdData, listener, nil
}

// HandlerEditListenerData updates an existing listener's configuration.
// Currently unimplemented - listener must be stopped and recreated to change config.
func HandlerEditListenerData(listener *HTTP, configData string) (adaptix.ListenerData, []byte, error) {
	var (
		listenerData adaptix.ListenerData
		customdData  []byte
		conf         HTTPConfig
		err          error
	)

	/// START CODE HERE

	err = json.Unmarshal([]byte(configData), &conf)
	if err != nil {
		return listenerData, customdData, err
	}

	listener.Config.CallbackAddress = conf.CallbackAddress
	listener.Config.ApiPath = conf.ApiPath

	listenerData = adaptix.ListenerData{
		BindHost:  listener.Config.HostBind,
		BindPort:  fmt.Sprintf("%d", listener.Config.PortBind),
		AgentAddr: listener.Config.CallbackAddress,
		Status:    "Listen",
	}
	if !listener.Active {
		listenerData.Status = "Closed"
	}

	var buffer bytes.Buffer
	err = json.NewEncoder(&buffer).Encode(listener.Config)
	if err != nil {
		return listenerData, customdData, err
	}
	customdData = buffer.Bytes()

	/// END CODE

	return listenerData, customdData, nil
}

// HandlerListenerGetProfile returns the listener's current configuration.
// Called when displaying listener details or populating agent generation dropdowns.
// Parameters:
//   - name: Listener identifier to retrieve config for
//   - listenerObject: The HTTP server instance
//
// Returns: JSON-encoded configuration and true if successful
func HandlerListenerGetProfile(listener *HTTP) ([]byte, error) {
	var object bytes.Buffer

	/// START CODE HERE

	err := json.NewEncoder(&object).Encode(listener.Config)
	if err != nil {
		return nil, err
	}

	/// END CODE

	return object.Bytes(), nil
}
