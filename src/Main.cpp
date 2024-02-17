#include <print>

#include "Display.hpp"
#include "Memory.hpp"
#include "Registers.hpp"

void run_program()
{
	Chip8::Memory const memory{4'096};
	Chip8::Registers const registers;
	Chip8::Display const display;
}

auto main() -> int
{
	try {
		std::println("Hello, CHIP-8!");

		run_program();
	} catch (std::exception& e) {
		return EXIT_FAILURE;
	}

	return EXIT_SUCCESS;
}