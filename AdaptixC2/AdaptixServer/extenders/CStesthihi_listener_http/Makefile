all: clean
	@ echo "    * Building CStesthihi_listener_http plugin"
	@ mkdir dist
	@ cp config.json ax_config.axs ./dist/
	@ GOEXPERIMENT=jsonv2,greenteagc go build -buildmode=plugin -ldflags="-s -w" -o ./dist/CStesthihi_http.so pl_main.go pl_listener.go pl_http.go
	@ echo "      done..."

clean:
	@ rm -rf dist
