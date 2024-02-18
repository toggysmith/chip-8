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
	/**
	 * @brief Facilitate the storage and access of data in memory and on a stack.
	 */
	class Memory
	{
	    public:
		/**
		 * @brief Get the word (2-bytes) at a given address in memory.
		 * @param address The starting address, in binary, of the word.
		 * @return The word at the address.
		 */
		[[nodiscard]] auto
		read_word_at_address(Word const& address) const -> Word;

	    private:
		std::array<std::byte, memory_size_in_bytes> memory_{};
		std::stack<Word> stack_{};
	};
}// namespace Chip8

#endif