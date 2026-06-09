all: clean
	@ echo "    * Building CStesthihi_agent plugin"
	@ mkdir dist
	@ cp config.json ax_config.axs ./dist/
	@ cp -r src_CStesthihi ./dist/
	@ GOEXPERIMENT=jsonv2,greenteagc go build -buildmode=plugin -ldflags="-s -w" -o ./dist/CStesthihi_agent.so pl_main.go pl_agent.go
	@ echo "      done..."

clean:
	@ rm -rf dist
