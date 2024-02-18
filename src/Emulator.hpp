#ifndef CHIP_8_EMULATOR_HPP
#define CHIP_8_EMULATOR_HPP

#include <types.hpp>

#include "Display.hpp"
#include "Memory.hpp"
#include "Registers.hpp"

namespace Chip8
{
	class Emulator
	{
	    public:
		explicit Emulator(u64 instructions_per_second);
		[[noreturn]] void execute();
		[[nodiscard]] auto fetch_instruction() -> Word;

	    private:
		u32 const instructions_per_second_;
		Memory memory_;
		Registers registers_;
		Display display_;
	};
}// namespace Chip8

#endif