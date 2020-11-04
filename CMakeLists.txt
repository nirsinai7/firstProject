cmake_minimum_required(VERSION 3.17)
project(firstProject)

set(CMAKE_CXX_STANDARD 11)

add_executable(firstProject main.cpp cmake-build-debug-wsl/content.cpp cmake-build-debug-wsl/content.h)

set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -gdwarf-3")
set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -gdwarf-3")