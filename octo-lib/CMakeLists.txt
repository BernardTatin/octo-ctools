cmake_minimum_required(VERSION 3.16)

list(APPEND CMAKE_MODULE_PATH "$ENV{INC_DIR}")
include(mainconfig)

# managing project configuration
configure_file(octo-ctools-config.h.in octo-ctools-config.h)

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
        "${PROJECT_BINARY_DIR}"
        )
