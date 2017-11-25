cmake_minimum_required(VERSION 3.8)
project(iterator_pos)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES library.h)
add_library(iterator_pos SHARED ${SOURCE_FILES})
set_target_properties(iterator_pos PROPERTIES LINKER_LANGUAGE CXX)
add_executable(example ${SOURCE_FILES} main.cpp)