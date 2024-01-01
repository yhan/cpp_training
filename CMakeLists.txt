cmake_minimum_required(VERSION 3.26)
project(untitled)

set(CMAKE_CXX_STANDARD 23)
add_subdirectory("${PROJECT_SOURCE_DIR}/classSample" "${PROJECT_SOURCE_DIR}/classSample/classSample_output")


add_executable(untitled main.cpp
        classSample/Person.cpp
        classSample/Person2.cpp)
