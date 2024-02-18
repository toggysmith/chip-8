#ifndef CHIP_8_MEMORY_HPP
#define CHIP_8_MEMORY_HPP

#include <array>
#include <bitset>
#include <cstddef>
#include <stack>

#include <types.hpp>

#include "Constants.hpp"

namespace Chip8
{
	class Memory
	{
	    public:
		Memory();
		[[nodiscard]] auto read_word_at_address(Word const&) const
			-> Word;

	    private:
		std::array<std::byte, memory_size_in_bytes> memory_{};
		std::stack<Word> stack_{};
	};
}// namespace Chip8

#endif