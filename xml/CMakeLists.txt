add_library(XMLModule STATIC
    pugixml-1.10/src/pugixml.hpp
    pugixml-1.10/src/pugixml.cpp
)

add_subdirectory(pugixml-1.10/src)