cmake_minimum_required(VERSION 3.4)
project(CPT_180_27_Assignment_5_Structures)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp config_reader_lib/reader.cpp config_reader_lib/reader.h)
add_executable(CPT_180_27_Assignment_5_Structures ${SOURCE_FILES})
