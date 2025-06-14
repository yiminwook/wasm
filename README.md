# Version

emscripten 3.1.40
python 3.12.5
cmake 4.0.2

# WASM 설치

```
git clone https://github.com/emscripten-core/emsdk.git
git pull
./emsdk install latest
./emsdk activate latest
```

# cmake for mac

```
brew install cmake
```

# WASM 명령어

```
source ./emsdk_env.sh # 터미널을 새로 열때마다 환경설정
emcc -lembind -o <outfile .js> <source .cpp>
```
