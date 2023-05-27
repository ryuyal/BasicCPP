cmake_minimum_required(VERSION 3.23)
project(function)
set(CMAKE_CXX_STANDARD 11)

add_executable(definition definition.cpp)
add_executable(pass_value pass_value.cpp)
add_executable(swap_test swap_test.cpp swap.cpp swap.h)