cmake_minimum_required(VERSION 3.3)
project(recursive_invert_arrays)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(recursive_invert_arrays ${SOURCE_FILES})