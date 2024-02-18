#ifndef CHIP_8_EMULATOR_HPP
#define CHIP_8_EMULATOR_HPP

#include <types.hpp>

#include "Display.hpp"
#include "Memory.hpp"
#include "Registers.hpp"

namespace Chip8
{
	/**
	 * @brief Facilitate the execution of CHIP-8 programs.
	 */
	class Emulator
	{
	    public:
		/**
		 * @brief Construct an instance of the emulator.
		 * @param instructions_per_second The number of instructions per second the emulator can execute.
		 */
		explicit Emulator(u64 instructions_per_second);

		/**
		 * @brief Begin executing the CHIP-8 program stored in memory.
		 */
		[[noreturn]] void execute();

	    private:
		/**
		 * @brief Fetch the next instruction that the program counter points to in memory.
		 * @return The instruction in binary.
		 */
		[[nodiscard]] auto fetch_instruction() -> Word;

		u32 const instructions_per_second_;
		Memory memory_;
		Registers registers_;
		Display display_;
	};
}// namespace Chip8

#endif