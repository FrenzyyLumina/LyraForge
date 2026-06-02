#include "application.h"


/* boilerplate code of death. 

LyraForge::Application::AppWindow() {
    if (!glfwInit()) {
        throw std::runtime_error("Failed to initialize GLFW");
    }

    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
    glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

    GLFWwindow*window = glfwCreateWindow(1280, 720, "LyraForge Demo", nullptr, nullptr); // this is already too much voodoo but necessary
    
    if (!window) {
        glfwTerminate();
        throw std::runtime_error("Failed to create GLFW window");
    }

}

*/

