# Core Library
cmake_minimum_required(VERSION 4.1)
project(LyraForge VERSION 0.1.0 LANGUAGES CXX)


# Library
add_library(${PROJECT_NAME}
    application.h
    application.cpp
    Engine/pch.h
    Engine/engine.h
    Engine/engine.cpp
)

target_include_directories(${PROJECT_NAME}
    PUBLIC
        $<INSTALL_INTERFACE:include>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/Engine>
    PRIVATE

    INTERFACE
)

target_link_libraries(${PROJECT_NAME}
    PUBLIC
        glfw 
        Vulkan::Vulkan
    PRIVATE
)

target_precompile_headers(${PROJECT_NAME} PRIVATE Engine/pch.h)