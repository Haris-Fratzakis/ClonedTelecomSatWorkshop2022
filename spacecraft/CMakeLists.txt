cmake_minimum_required(VERSION 3.23)
project(FSKMod)

set(CMAKE_CXX_STANDARD 17)

if (NOT CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")
    add_compile_options(-Wall -Wextra -Wpedantic -Wvla -Walloca)
endif ()

add_library(fskcommon OBJECT
        src/FSKModulator.cpp
        src/helpers.cpp
        )

include_directories(inc)
add_executable(FSKMod src/main.cpp $<TARGET_OBJECTS:fskcommon>)

