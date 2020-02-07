cmake_minimum_required(VERSION 3.15)
project(find_route)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(find_route
        CMakeLists.txt
        main.cpp
        node.h
        readme.txt)
