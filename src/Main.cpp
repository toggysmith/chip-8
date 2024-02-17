#include <print>

auto main() -> int
{
	try {
		std::println("Hello, CHIP-8!");
	} catch (std::exception &e) {
		return EXIT_FAILURE;
	}

	return EXIT_SUCCESS;
}