#ifndef CHIP_8_MEMORY_HPP
#define CHIP_8_MEMORY_HPP

#include <array>
#include <bitset>
#include <cstddef>
#include <stack>
#include <vector>

#include <types.hpp>

#include "Constants.hpp"

namespace Chip8
{
	class Memory
	{
	    public:
		explicit Memory(u64 memory_size_in_bytes);

	    private:
		std::vector<std::byte> memory_;
		std::stack<std::bitset<word_size_in_bits>> stack_;
	};
}// namespace Chip8

#endif