cmake_minimum_required(VERSION 3.4)
project(strings_a_primer)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(strings_a_primer ${SOURCE_FILES})