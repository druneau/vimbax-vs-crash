cmake_minimum_required(VERSION 3.16)
project(vimbax_minimal LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Update VIMBAX_ROOT to your location
set(VIMBAX_ROOT "/home/dbruneau/VimbaX_2025-1/api")

include_directories(${VIMBAX_ROOT}/include)
link_directories(${VIMBAX_ROOT}/lib)

add_executable(vimbax_minimal main.cpp)
target_link_libraries(vimbax_minimal PRIVATE VmbCPP pthread)