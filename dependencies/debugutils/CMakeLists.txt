add_library(debugutils
src/debug.cpp)

target_link_libraries(debugutils core)
target_include_directories(debugutils PUBLIC include)
