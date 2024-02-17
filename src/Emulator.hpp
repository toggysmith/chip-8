#ifndef CHIP_8_EMULATOR_HPP
#define CHIP_8_EMULATOR_HPP

#include "Display.hpp"
#include "Memory.hpp"
#include "Registers.hpp"

namespace Chip8
{
	class Emulator
	{
	    public:
		void execute();

	    private:
		Memory memory_;
		Registers registers_;
		Display display_;
	};
}// namespace Chip8

#endif