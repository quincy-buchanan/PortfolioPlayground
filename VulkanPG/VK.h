#pragma once
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#include <iostream>
#include <stdexcept>
#include <cstdlib>
#include <vector>

const uint32_t WIDTH = 800;
const uint32_t HEIGHT = 600;

class VK {
public:
    void run() {
        initWindow();
        initVulkan();
        mainLoop();
        cleanup();
    }

    void initWindow();
    void initVulkan();
    void mainLoop();
    void cleanup();

    void createInstance();

private:
    GLFWwindow* window;
    VkInstance instance;
};