cmake_minimum_required(VERSION 3.27)
project(wskaniki)

set(CMAKE_CXX_STANDARD 17)

add_executable(wskaniki main.cpp
        array.cpp
        array.h)
