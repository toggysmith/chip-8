#ifndef CHIP_8_CONSTANTS_HPP
#define CHIP_8_CONSTANTS_HPP

#include <bitset>

#include <types.hpp>

namespace Chip8
{
	/// @brief The number of bytes available for memory.
	u16 constexpr memory_size_in_bytes{4'096};
	/// @brief The size of the processor's word.
	std::size_t constexpr word_size_in_bytes{2};
	/// @brief The number of pixels wide the display is.
	u16 constexpr display_width{64};
	/// @brief The number of pixels high the display is.
	u16 constexpr display_height{32};

	/// @brief A word: the natural unit of data for the processor.
	using Word = std::bitset<word_size_in_bytes * 8>;// NOLINT
}// namespace Chip8

#endif