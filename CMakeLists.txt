cmake_minimum_required(VERSION 3.10)

# Create project
set(ProjectName "main")
project(${ProjectName})

# Compile Option
set(CMAKE_INSTALL_PREFIX "./install" CACHE STRING "install path" FORCE)
include(${CMAKE_SOURCE_DIR}/cmakes/compile_option.cmake)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Create executable file
add_executable(
  ${ProjectName}
  main.cpp
)

# Add source
# target_sources(${ProjectName} PRIVATE
#   ooo.cpp
# )

# Add test module
option(BUILD_TESTS "BUILD_TESTS" ON)
if(BUILD_TESTS)
  enable_testing()
  add_subdirectory(./test)
endif()
