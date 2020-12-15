#Turning the tests for the JSON library off
set(JSON_BuildTests OFF CACHE INTERNAL "")

add_subdirectory(json)
add_subdirectory(algorithms)
add_subdirectory(xml)

add_library(AdiFramCPP INTERFACE)
target_link_libraries(AdiFramCPP INTERFACE AdiFramCPP_algorithms AdiFramCPP_xml nlohmann_json::nlohmann_json)