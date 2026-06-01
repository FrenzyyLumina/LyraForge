# CMakeLists.txt (Project Root)
cmake_minimum_required(VERSION 4.1)

# LyraForge Version 0.1.0 "Andromeda" 
project(LyraForgeApp VERSION 0.1.0 LANGUAGES CXX)

# Global settings
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)  # For IDE support
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# User-configurable options
option(BUILD_EXAMPLES "Build example applications" ON)
option(BUILD_STATIC_LIB "Build static library only" OFF)
option(ENABLE_TIME_TRACE "Add -ftime-trace to Clang builds" OFF)

# MSVC runtime (/MD)
if(MSVC)
  set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreadedDLL")
endif()

# Paths
set(PROJ_ROOT "${CMAKE_SOURCE_DIR}")
set(VENDOR_DIR "${PROJ_ROOT}/External/vendor")

# LyraForge.exe
add_executable(${PROJECT_NAME} App/main.cpp)

# System Dependencies
find_package(Vulkan REQUIRED)