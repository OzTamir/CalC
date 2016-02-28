cmake_minimum_required(VERSION 3.3)
project(CalC__)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Token.cpp Token.h)
add_executable(CalC__ ${SOURCE_FILES})