#include "Registers.hpp"

auto Chip8::Registers::program_counter() const -> Word const&
{
	return program_counter_;
}

void Chip8::Registers::increment_program_counter_to_next_word()
{
	unsigned long long program_counter_in_denary{
		program_counter_.to_ullong()};
	program_counter_in_denary += word_size_in_bytes;
	program_counter_ = Word{program_counter_in_denary};
}