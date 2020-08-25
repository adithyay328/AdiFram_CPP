#Minimum Cmake Version
cmake_minimum_required(VERSION 3.10)

#Framework Project Name
project(AdiFram_CPP)

#Setting path to build tree
set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)

#Executables will be placed in bin folder as well
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})

#And so will libraries
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})

#XML module is stored in this directory with its own CMakelist
add_subdirectory(xml)
