cmake_minimum_required(VERSION 3.17)
project(RPO6 C)

set(CMAKE_C_STANDARD 99)

include_directories(.)
include_directories(dynamicString)
include_directories(util)

add_executable(RPO6
        dynamicString/core.c
        dynamicString/tool.c
        util/intByte.c
        main.c
        menu.c)
