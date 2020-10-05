add_library(AdiFramCPP_xml STATIC 
pugixml.hpp
pugixml.cpp
)

target_include_directories(AdiFramCPP_xml PUBLIC $(CMAKE_CURRENT_SOURCE_DIR))