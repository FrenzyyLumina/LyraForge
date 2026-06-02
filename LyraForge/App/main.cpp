#include <vulkan/vulkan.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

/*
#include XR_USE_GRAPHICS_API_VULKAN
#include <openxr/openxr.h>
#include <openxr/openxr_platform.h>
*/


#include <glm/glm.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <glm/gtc/quaternion.hpp>

#include "pch.h"
#include "application.h"

using namespace LyraForge;


class Andromeda : public Application {
    public:
        Andromeda() {
            std::cout << "This is voodoo; the question is - is this too much. And this is the hardest question you could ever face in programming." << std::endl;
        }
};

int main(int argc, char** argv) {
    // That bird has no idea what he's looking at. And yet what does the bird do? Does he panic? No, he can't really panic, he just does the best he can.



    std::cout << "That bird has no idea what he's looking at." << std::endl;
    std::cout << "And yet what does the bird do? Does he panic? No, he can't really panic, he just does the best he can." << std::endl;
    return 0;
}