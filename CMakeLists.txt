add_library(gllpp INTERFACE)
target_include_directories(gllpp INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(gllpp INTERFACE opengl32.lib)
