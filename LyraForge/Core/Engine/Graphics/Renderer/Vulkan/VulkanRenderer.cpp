#include "VulkanRenderer.h"
#include "pch.h"
#include <VkBootstrap.h>


// once again boilerplate for now. i am too fucking stupid to continue.
namespace Lyra
{
    VulkanRenderer::Init()
    {
        // Initialize Vulkan instance and device using VkBootstrap
        vkb::InstanceBuilder instanceBuilder;
        auto instanceResult = instanceBuilder.set_app_name("Lyra Engine")
            .set_engine_name("Lyra Engine")
            .request_validation_layers(true)
            .require_api_version(1, 2)
            .build();

        if (!instanceResult) {
            throw std::runtime_error("Failed to create Vulkan instance: " + instanceResult.error().message());
        }
        instance = instanceResult.value();

        vkb::PhysicalDeviceSelector selector(instance);
        auto physicalDeviceResult = selector.set_minimum_version(1, 2).select();
        if (!physicalDeviceResult) {
            throw std::runtime_error("Failed to select physical device: " + physicalDeviceResult.error().message());
        }
        physicalDevice = physicalDeviceResult.value();

        vkb::DeviceBuilder deviceBuilder(physicalDevice);
        auto deviceResult = deviceBuilder.build();
        if (!deviceResult) {
            throw std::runtime_error("Failed to create logical device: " + deviceResult.error().message());
        }
        device = deviceResult.value();
    }

    VulkanRenderer::~VulkanRenderer()
    {

        if (device) {
            vkDestroyDevice(device, nullptr);
        }
        if (instance) {
            vkDestroyInstance(instance, nullptr);
        }
    }

    void VulkanRenderer::Render()
    {
        // Implement rendering logic here after you finally understand voodoo.
    }
}

