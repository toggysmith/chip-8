#ifndef CHIP_8_DISPLAY_HPP
#define CHIP_8_DISPLAY_HPP

#include <array>

#include <types.hpp>

#include "Constants.hpp"

namespace Chip8
{
	class Display
	{
	    public:
		Display();

		using DisplayDataRow = std::array<bool, display_width>;
		using DisplayData = std::array<DisplayDataRow, display_height>;

	    private:
		DisplayData display_{};
	};
}// namespace Chip8

#endif