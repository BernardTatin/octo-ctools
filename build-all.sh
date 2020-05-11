#!/bin/sh

BUILD_DIR=build
[ -d ${BUILD_DIR} ] && rm -rf ${BUILD_DIR}
mkdir ${BUILD_DIR}

cmake -S . -B build || echo "cmake init failure"
cd ${BUILD_DIR}
cmake --build . || echo "cmake build failure"
