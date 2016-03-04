cmake_minimum_required(VERSION 3.3)
project(tokenize_string)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(tokenize_string ${SOURCE_FILES})
