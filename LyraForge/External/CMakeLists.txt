# Luau
set(LUAU_BUILD_FUZZER false)
set(LUAU_BUILD_CLI false)
set(LUAU_BUILD_TESTS false)
set(LUAU_STATIC_CRT true)

# GLFW
set(GLFW_BUILD_EXAMPLES false)
set(GLFW_BUILD_TESTS false)
set(GLFW_BUILD_DOCS false)

# External Libraries
add_subdirectory(luau EXCLUDE_FROM_ALL)
add_subdirectory(glfw EXCLUDE_FROM_ALL)
add_subdirectory(glm EXCLUDE_FROM_ALL)
add_subdirectory(vk-bootstrap EXCLUDE_FROM_ALL)
add_subdirectory(VulkanMemoryAllocator EXCLUDE_FROM_ALL)