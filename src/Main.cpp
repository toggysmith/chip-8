#include <print>

#include "Emulator.hpp"

auto main() -> int
{
	try {
		std::println("Hello, CHIP-8!");

		u64 constexpr instructions_per_second{700};
		Chip8::Emulator emulator{instructions_per_second};
		emulator.execute();
	} catch (std::exception& e) {
		return EXIT_FAILURE;
	}
}