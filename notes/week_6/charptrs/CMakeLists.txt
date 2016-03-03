cmake_minimum_required(VERSION 3.4)
project(charptrs)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(charptrs ${SOURCE_FILES})