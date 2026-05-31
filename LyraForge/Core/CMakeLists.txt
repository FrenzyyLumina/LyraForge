# CMakeLists.txt (Project Root)
cmake_minimum_required(VERSION 4.1)

# LyraForge Version 0.1.0 "Andromeda" 
project(LyraForgeCore VERSION 0.1.0 LANGUAGES CXX)

# Global settings
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)  # For IDE support
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# External


# Library
add_library(LyraForgeCore
    engine.cpp
    engine.h
)
