cmake_minimum_required(VERSION 3.26)
project(untitled)

set(CMAKE_CXX_STANDARD 23)

add_subdirectory("${PROJECT_SOURCE_DIR}/make_heap" "${PROJECT_SOURCE_DIR}/make_heap/make_heap_output")


# Function to traverse subdirectories and add CMakeLists.txt files
#function(add_subdirectories dir)
#    file(GLOB subdirs RELATIVE ${dir} ${dir}/*)
#    foreach(subdir ${subdirs})
#        if(IS_DIRECTORY ${dir}/${subdir})
#            add_subdirectory(${dir}/${subdir})
#        endif()
#    endforeach()
#endfunction()
#
## Call the function to add subdirectories
#add_subdirectories(${CMAKE_SOURCE_DIR})

add_executable(untitled main.cpp)
