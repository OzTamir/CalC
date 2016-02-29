cmake_minimum_required(VERSION 3.3)
project(CalC__)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp CalC/TokenStream.cpp CalC/TokenStream.h CalC/Operator.cpp CalC/Operator.h CalC/Expression.cpp CalC/Expression.h)
add_executable(CalC__ ${SOURCE_FILES})