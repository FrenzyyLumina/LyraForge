# Core Library
cmake_minimum_required(VERSION 4.1)
project(LyraForge VERSION 0.1.0)


# External Libraries


# Library
add_library(${PROJECT_NAME}
    application.h
    application.cpp
)

target_include_directories(${PROJECT_NAME}
    PUBLIC
        $<INSTALL_INTERFACE:include>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
    PRIVATE

    INTERFACE

)

target_link_libraries(${PROJECT_NAME}
    PUBLIC

    PRIVATE
        glfw Vulkan::Vulkan
)