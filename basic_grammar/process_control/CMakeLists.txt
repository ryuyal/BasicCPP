cmake_minimum_required(VERSION 3.23)
project(process_control)
set(CMAKE_CXX_STANDARD 11)

add_executable(select_structure select_structure.cpp)
add_executable(loop_structure loop_structure.cpp)
add_executable(jump_statement jump_statement.cpp)