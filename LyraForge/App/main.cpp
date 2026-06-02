#include <vulkan/vulkan.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>


#include <glm/glm.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <glm/gtc/quaternion.hpp>

#include "pch.h"
#include "application.h"



using namespace LyraForge;

// using namespace LyraForge::Services;

static const unsigned int MajorVersion = 0;
static const unsigned int MinorVersion = 1;
static const unsigned int PatchVersion = 0;


class DemoApplication : public Application {
    public:
        DemoApplication() : Application({1280, 720}, "LyraForge - Andromeda") { //king of boilerplate coding

            // should be moved to application.cpp after testing
            if (!glfwInit()) {
                throw std::runtime_error("Failed to initialize GLFW");
            }

            glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
            glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);


            GLFWwindow*window = glfwCreateWindow(1280, 720, "LyraForge - Andromeda", nullptr, nullptr); // this is already too much voodoo but necessary
            
            if (!window) {
                throw std::runtime_error("Failed to create GLFW window");
                glfwTerminate();
            }


        }
};

int main(int argc, char** argv) {
    // That bird has no idea what he's looking at. And yet what does the bird do? Does he panic? No, he can't really panic, he just does the best he can.



    std::cout << "That bird has no idea what he's looking at." << std::endl;
    std::cout << "And yet what does the bird do? Does he panic? No, he can't really panic, he just does the best he can." << std::endl;
    return 0;
}