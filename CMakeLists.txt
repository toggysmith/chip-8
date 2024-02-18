cmake_minimum_required(VERSION 3.26)
project(chip_8)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(chip_8
        src/Main.cpp
        src/Memory.cpp
        src/Registers.cpp
        src/Display.cpp
        src/Display.hpp
        src/Display.cpp
        src/Emulator.cpp
        src/Emulator.hpp
)

target_include_directories(chip_8 PRIVATE external)