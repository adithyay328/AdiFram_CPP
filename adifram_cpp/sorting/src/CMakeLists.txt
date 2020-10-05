add_library(AdiFramCPP_sorting STATIC 
Sorting.hpp
InsertionSort.cpp
MergeSort.cpp
SelectionSort.cpp
)

target_include_directories(AdiFramCPP_sorting PUBLIC $(CMAKE_CURRENT_SOURCE_DIR))