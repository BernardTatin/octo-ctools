#!/bin/sh

export BUILD_DIR=$(pwd)/build
export INC_DIR=$(pwd)/Cmk
[ -d ${BUILD_DIR} ] && rm -rf ${BUILD_DIR}
mkdir ${BUILD_DIR}

CC=clang CXX=clang++ cmake -S . -B build || echo "cmake init failure" || exit 1
cd ${BUILD_DIR}
CC=clang CXX=clang++ cmake --build . || echo "cmake build failure" || exit 1

# test stdin with pipes
echo "----------------------------------------------------------------------------------"
cat ../LICENSE | ./hexdump/hexdump.exe | head
echo "----------------------------------------------------------------------------------"
./hexdump/hexdump.exe --help
echo "----------------------------------------------------------------------------------"
