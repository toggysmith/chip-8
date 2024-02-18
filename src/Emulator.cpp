#include "Emulator.hpp"

#include <chrono>
#include <thread>

Chip8::Emulator::Emulator(u64 const instructions_per_second)
    : instructions_per_second_(instructions_per_second)
{}

void Chip8::Emulator::execute()
{
	f64 const time_until_next_instruction_in_seconds{
		1.0 / instructions_per_second_};
	u64 const time_until_next_instruction_in_milliseconds{static_cast<u64>(
		time_until_next_instruction_in_seconds * 1000)};

	while (true) {
		// Fetch
		Word const instruction_in_binary{fetch_instruction()};

		// Decode

		// Execute
		std::this_thread::sleep_for(std::chrono::milliseconds(
			time_until_next_instruction_in_milliseconds));
	}
}

auto Chip8::Emulator::fetch_instruction() -> Word
{
	Word const& instruction_address{registers_.program_counter()};
	Word const& instruction_in_binary{
		memory_.read_word_at_address(instruction_address)};
	registers_.increment_program_counter_to_next_word();

	return instruction_in_binary;
}