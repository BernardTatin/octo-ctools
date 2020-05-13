# ======================================================================
# mainconfig.cmake for octo-ctools
# ======================================================================

set(OCTO_VERSION "0.1.1")
# project description
project(octo_ctools
        VERSION ${OCTO_VERSION}
        DESCRIPTION "Some tools for C development and experimentation"
        HOMEPAGE_URL https://github.com/BernardTatin/octo-ctools
        LANGUAGES C)

set(CMAKE_C_STANDARD 11)
set(C_EXTENSIONS, FALSE)

add_compile_options(-Wall -Wextra -pedantic)

