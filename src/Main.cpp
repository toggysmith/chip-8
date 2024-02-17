#include <print>

#include "Memory.hpp"

void run_program()
{
	Chip8::Memory const memory{4'096};
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