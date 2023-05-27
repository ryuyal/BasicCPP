cmake_minimum_required(VERSION 3.23)
project(operator)
set(CMAKE_CXX_STANDARD 11)

add_executable(arithmetic arithmetic.cpp)
add_executable(assignment assignment.cpp)
add_executable(comparison comparison.cpp)
add_executable(logical logical.cpp)