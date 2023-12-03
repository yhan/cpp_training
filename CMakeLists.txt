cmake_minimum_required(VERSION 3.26)
project(untitled)

set(CMAKE_CXX_STANDARD 23)

add_subdirectory("${PROJECT_SOURCE_DIR}/make_heap" "${PROJECT_SOURCE_DIR}/make_heap/make_heap_output")

add_executable(untitled main.cpp
        make_heap/Plus.cpp
        make_heap/Plus.h
        make_heap/Plus.h)
