#pragma once

#include "pch.h"

// boilerplate code for now.
namespace LyraForge {
    class Application {
        public:
            Application(const std::pair<uint32_t, uint32_t>& windowSize, const std::string& title) : Width(windowSize.first), Height(windowSize.second), Title(title) {

            }

        protected:
            uint32_t Width;
            uint32_t Height;
            std::string Title;
    };
}