cmake_minimum_required(VERSION 3.16)
project(octo_ctools C)

set(CMAKE_C_STANDARD 11)

include_directories(hexdump/include
        lib/include)

add_library(thelib STATIC
        lib/include/file-reader.h
        lib/include/private-file-header.h
        lib/src/file-reader.c
        lib/src/clist.c
        lib/src/rbuffer.c)

add_executable(hexdump.exe
        hexdump/include/hexops.h
        hexdump/src/hexdump.c
        hexdump/src/hexops.c)
target_link_libraries(hexdump.exe thelib)
