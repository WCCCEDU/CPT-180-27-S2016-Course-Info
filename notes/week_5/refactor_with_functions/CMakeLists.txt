cmake_minimum_required(VERSION 3.3)
project(function)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES calorie.cpp calorie.h)
add_executable(function ${SOURCE_FILES})
