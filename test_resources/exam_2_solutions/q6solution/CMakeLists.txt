cmake_minimum_required(VERSION 3.3)
project(something_to_refactor)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES refactor_me.cpp refactored.cpp)
add_executable(something_to_refactor ${SOURCE_FILES})
