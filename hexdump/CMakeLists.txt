cmake_minimum_required(VERSION 3.16)
project(octo_ctools C)

set(CMAKE_C_STANDARD 11)

add_executable(hexdump.exe
        include/hexops.h
        src/hexdump.c
        src/hexops.c)
target_include_directories(hexdump.exe PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>  # <prefix>/include
        "${PROJECT_BINARY_DIR}"
        )
target_link_libraries(hexdump.exe octo)
