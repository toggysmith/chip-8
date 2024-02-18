#ifndef CHIP_8_CONSTANTS_HPP
#define CHIP_8_CONSTANTS_HPP

#include <bitset>

#include <types.hpp>

namespace Chip8
{
	u16 constexpr memory_size_in_bytes{4'096};
	std::size_t constexpr word_size_in_bytes{2};
	u16 constexpr display_width{64};
	u16 constexpr display_height{32};

	using Word = std::bitset<word_size_in_bytes * 8>;// NOLINT
}// namespace Chip8

#endif