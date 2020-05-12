cmake_minimum_required(VERSION 3.16)
project(octo_ctools C)

set(CMAKE_C_STANDARD 11)

add_library(octo STATIC
        include/file-reader.h
        include/private-file-header.h
        src/file-reader.c
        src/clist.c
        src/rbuffer.c
        src/version.c)
target_include_directories(octo PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>  # <prefix>/include
        )
