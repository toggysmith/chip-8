#ifndef CHIP_8_CONSTANTS_HPP
#define CHIP_8_CONSTANTS_HPP

#include <Types.hpp>

namespace Chip8
{
	u16 constexpr memory_size_in_bytes{4'096};
	u16 constexpr word_size_in_bits{16};
	u16 constexpr display_width{64};
	u16 constexpr display_height{32};
}// namespace Chip8

#endif