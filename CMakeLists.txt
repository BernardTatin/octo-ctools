# ======================================================================
# CMakeLists.txt for octo-ctools
# ======================================================================
cmake_minimum_required(VERSION 3.16)

list(APPEND CMAKE_MODULE_PATH "$ENV{INC_DIR}")
message("INC_DIR: $ENV{INC_DIR}")
message("root CMAKE_MODULE_PATH: ${CMAKE_MODULE_PATH}")
include(mainconfig)

# project description
project(octo_ctools
        VERSION ${OCTO_VERSION}
        DESCRIPTION "Some tools for C development and experimentation"
        HOMEPAGE_URL https://github.com/BernardTatin/octo-ctools
        LANGUAGES C)

set(CMAKE_C_STANDARD 11)

#
# set(CMAKE_VERBOSE_MAKEFILE TRUE)

# the library
add_subdirectory(octo-lib)
# sample code which use the library
add_subdirectory(hexdump)
