cmake_minimum_required(VERSION 3.3)
project(use_library)

include_directories( ${MY_SOURCE_DIR}/../include )
link_directories( ${MY_SOURCE_DIR}/../include )

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(use_library ${SOURCE_FILES})
target_link_libraries(use_library function )
