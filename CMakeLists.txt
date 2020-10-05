cmake_minimum_required(VERSION 3.10)

#Change this to your app name
project(MyApp)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/exec)

#Framework's Cmake files run before anything else to ensure it can be called upon later on
add_subdirectory(adifram_cpp)

#Include non-framework libraries here

#Including the app last; ensures that framework and library targets are already created
add_subdirectory(app)