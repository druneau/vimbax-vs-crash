#include <VmbCPP/VmbCPP.h>
#include <iostream>
#include <stdexcept>

using namespace VmbCPP;

int main()
{
    // Init VimbaX
    if (VmbSystem::GetInstance().Startup() != VmbErrorSuccess)
    {
        throw std::runtime_error("Failed to initialize VimbaX system.");
    }

    std::cout << "VimbaX system initialized successfully." << std::endl;

    // Always shut down before exiting
    VmbSystem::GetInstance().Shutdown();

    return 0;
}