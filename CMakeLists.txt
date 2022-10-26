cmake_minimum_required(VERSION 3.24.0)

project(physics_simulation VERSION 1.0.0)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/dependencies/core)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/dependencies/debugutils)
add_executable(physics_simulation main.cpp)

target_link_libraries(physics_simulation core debugutils)
