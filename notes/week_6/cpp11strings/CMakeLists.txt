cmake_minimum_required(VERSION 3.4)
project(cpp11strings)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(cpp11strings ${SOURCE_FILES})