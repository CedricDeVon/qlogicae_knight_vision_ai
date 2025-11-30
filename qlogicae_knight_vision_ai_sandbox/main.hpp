#pragma once

#include "qlogicae_vs2022_sandbox/includes/application.hpp"

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

namespace QLogicaeVS2022Sandbox
{

}
