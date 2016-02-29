cmake_minimum_required(VERSION 3.3)
project(CalC__)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp TokenStream.cpp TokenStream.h Operator.cpp Operator.h Expression.cpp Expression.h)
add_executable(CalC__ ${SOURCE_FILES})