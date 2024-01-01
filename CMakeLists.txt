cmake_minimum_required(VERSION 3.26)
project(untitled)

set(CMAKE_CXX_STANDARD 23)
#set(CMAKE_GENERATOR_PLATFORM Win32)
#add_subdirectory("${PROJECT_SOURCE_DIR}/make_heap" "${PROJECT_SOURCE_DIR}/make_heap/make_heap_output")
add_subdirectory("${PROJECT_SOURCE_DIR}/classSample" "${PROJECT_SOURCE_DIR}/classSample/classSample_output")


add_executable(untitled main.cpp
        classSample/Person.cpp
        classSample/Person2.cpp)
