cmake_minimum_required(VERSION 3.2)
project(laba6_var25)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(laba6_var25 ${SOURCE_FILES} header_file.h)