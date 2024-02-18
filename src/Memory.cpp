#include "Memory.hpp"

////////////////////////////////////////////////////////////////////////////////
auto Chip8::Memory::read_word_at_address(const Chip8::Word& address) const
	-> Chip8::Word
{
	// Get address of first and second byte in denary.
	unsigned long long const first_byte_address{address.to_ullong()};
	unsigned long long const second_byte_address{first_byte_address + 1};

	// Read each byte.
	std::byte const first_byte{memory_.at(first_byte_address)};
	std::byte const second_byte{memory_.at(second_byte_address)};

	// Combine the bytes into a single word.
	std::bitset<8> const first_byte_as_bitset{
		std::to_integer<u64>(first_byte)};
	std::bitset<8> const second_byte_as_bitset{
		std::to_integer<u64>(second_byte)};
	Word word;
	for (i32 i{0}; i < 8; i++) {// NOLINT
		word.set(i, first_byte_as_bitset[i]);
	}
	for (i32 i{8}; i < 16; i++) {			  // NOLINT
		word.set(i, second_byte_as_bitset[i - 8]);// NOLINT
	}

	return word;
}