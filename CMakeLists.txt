project("c_usage_examples")
cmake_minimum_required(VERSION 3.22)
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED 11)

add_definitions(-O -g -std=c11)
add_subdirectory(c-algos)