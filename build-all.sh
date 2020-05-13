#!/bin/sh

export BUILD_DIR=$(pwd)/build
export INC_DIR=$(pwd)/Cmk
[ -d ${BUILD_DIR} ] && rm -rf ${BUILD_DIR}
mkdir ${BUILD_DIR}

cmake -S . -B build || echo "cmake init failure" || exit 1
cd ${BUILD_DIR}
cmake --build . || echo "cmake build failure" || exit 1

# test stdin with pipes
cat ../LICENSE | ./hexdump/hexdump.exe
./hexdump/hexdump.exe --help
