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
        return 1;
    }
    VmbVersionInfo_t ver{};
    if (VmbSystem::GetInstance().QueryVersion(ver) == VmbErrorSuccess)
    {
        std::cout << "VimbaX version: " << ver.major << "." << ver.minor << "." << ver.patch << "\n";
    }
    std::cout << "VimbaX system initialized successfully.\n";
    VmbSystem::GetInstance().Shutdown();
}