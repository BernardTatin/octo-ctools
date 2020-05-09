cmake_minimum_required(VERSION 3.16)
project(new_ctools C)

set(CMAKE_C_STANDARD 11)

include_directories(hexdump/include
        lib/include)

add_executable(hexdump.exe
        hexdump/include/file-reader.h
        hexdump/include/hexops.h
        hexdump/include/private-file-header.h
        hexdump/src/file-reader.c
        hexdump/src/hexdump.c
        hexdump/src/hexops.c
        lib/src/clist.c
        lib/src/rbuffer.c)
