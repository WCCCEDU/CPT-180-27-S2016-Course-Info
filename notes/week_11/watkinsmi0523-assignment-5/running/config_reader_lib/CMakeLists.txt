cmake_minimum_required(VERSION 3.3)
project(Libraries)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(LIBRARY_FILES lib/reader.h lib/reader.cpp)
add_library(Library ${LIBRARY_FILES})