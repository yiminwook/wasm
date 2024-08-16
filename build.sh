#!/bin/bash

# 인자로 소스 파일을 받습니다.
SOURCE_FILE=$1

# 파일이 제공되지 않았을 때의 오류 처리
if [ -z "$SOURCE_FILE" ]; then
  echo "사용법: $0 <소스 파일 경로>"
  exit 1
fi

emcc $SOURCE_FILE -s WASM=1 -o index.html

echo "빌드 완료: $SOURCE_FILE -> index.html"