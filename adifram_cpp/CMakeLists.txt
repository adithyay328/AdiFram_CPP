add_subdirectory(sorting)
add_subdirectory(xml)

add_library(AdiFramCPP INTERFACE)
add_dependencies(AdiFramCPP AdiFramCPP_sorting AdiFramCPP_xml)