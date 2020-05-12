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
# managing project configuration
configure_file(octo-ctools-config.h.in octo-ctools-config.h)

set(CMAKE_C_STANDARD 11)

# the library
add_subdirectory(octo-lib)
# sample code which use the library
add_subdirectory(hexdump)
