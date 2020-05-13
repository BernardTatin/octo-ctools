# ======================================================================
# CMakeLists.txt for octo-ctools
# ======================================================================
cmake_minimum_required(VERSION 3.16)

list(APPEND CMAKE_MODULE_PATH "$ENV{INC_DIR}")
include(mainconfig)

# the library
add_subdirectory(octo-lib)
# sample code which use the library
add_subdirectory(hexdump)
