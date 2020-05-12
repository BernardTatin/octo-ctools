# ======================================================================
# CMakeLists.txt for octo-ctools
# ======================================================================
cmake_minimum_required(VERSION 3.16)

# project description
project(octo_ctools
        VERSION 0.1.0
        DESCRIPTION "Some tools for C development and experimentation"
        HOMEPAGE_URL https://github.com/BernardTatin/octo-ctools
        LANGUAGES C)

set(CMAKE_C_STANDARD 11)

#
set(CMAKE_VERBOSE_MAKEFILE TRUE)

# the library
add_subdirectory(octo-lib)
# sample code which use the library
add_subdirectory(hexdump)
