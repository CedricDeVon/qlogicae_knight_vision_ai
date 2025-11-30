#pragma once

#include "qlogicae_knight_vision_ai_desktop/includes/application.hpp"

#include "qlogicae_knight_vision_ai_core/includes/all.hpp"
#include "qlogicae_core/includes/all.hpp"

int main(int, char**);

int WINAPI WinMain(
    HINSTANCE hInstance,
    HINSTANCE,
    LPSTR,
    int
)
{
    return main(__argc, __argv);
}

namespace QLogicaeKnightVisionAi
{

}
