cmake_minimum_required(VERSION 3.3)
project(array_of_pointers)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(array_of_pointers ${SOURCE_FILES})