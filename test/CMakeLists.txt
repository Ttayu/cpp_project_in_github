cmake_minimum_required(VERSION 3.10)

set(GTest_DIR ${CMAKE_CURRENT_SOURCE_DIR}/third_party/googletest)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
message(${GTest_DIR})
add_subdirectory(${GTest_DIR})
message(${GTest_DIR})
include(GoogleTest)

# Compile option (re-do this, because GoogleTest seems to set CMAKE_CXX_STANDARD to 11)
include(${CMAKE_SOURCE_DIR}/cmakes/compile_option.cmake)

# Add test modules
add_subdirectory(./main)
