# Version

emscripten 3.1.40
python 3.12.5
cmake 4.0.2

# WASM 설치

```
git clone https://github.com/emscripten-core/emsdk.git
cd emsdk
git pull
./emsdk install latest
./emsdk activate latest
```

# Wasmtime 설치 - WASM 런타임

```
curl https://wasmtime.dev/install.sh -sSf | bash
```

# Rust 설치

```
curl --proto '=https' --tlsv1.2 -sSf https://sh.rustup.rs | sh
```

# Wask-pack 설치

```
cargo install wasm-pack
```

# CMake 설치 for mac

```
brew install cmake
```

# WASM 명령어

```
source ./emsdk_env.sh # 터미널을 새로 열때마다 환경설정
emcc -lembind -o <outfile .js> <source .cpp>
```
