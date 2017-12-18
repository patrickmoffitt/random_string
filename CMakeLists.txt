cmake_minimum_required(VERSION 3.9)
project(random_string)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_CXX_FLAGS " -v")
set(CMAKE_STATIC_LINKER_FLAGS " -v -search_paths_first")

add_executable(random_string random_string.hpp random_string.cpp main.cpp)