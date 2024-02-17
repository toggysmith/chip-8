#include <print>

#include "Emulator.hpp"

auto main() -> int
{
	try {
		std::println("Hello, CHIP-8!");

		Chip8::Emulator emulator;
		emulator.execute();
	} catch (std::exception& e) {
		return EXIT_FAILURE;
	}

	return EXIT_SUCCESS;
}