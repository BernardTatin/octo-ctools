cmake_minimum_required(VERSION 3.16)
project(octo_ctools C)

set(CMAKE_C_STANDARD 11)

include_directories(hexdump/include
        octo-lib/include)

add_library(octo STATIC
        octo-lib/include/file-reader.h
        octo-lib/include/private-file-header.h
        octo-lib/src/file-reader.c
        octo-lib/src/clist.c
        octo-lib/src/rbuffer.c)

add_executable(hexdump.exe
        hexdump/include/hexops.h
        hexdump/src/hexdump.c
        hexdump/src/hexops.c)
target_link_libraries(hexdump.exe octo)
