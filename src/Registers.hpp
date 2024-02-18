#ifndef CHIP_8_REGISTERS_HPP
#define CHIP_8_REGISTERS_HPP

#include <bitset>
#include <cstddef>

#include "Constants.hpp"

namespace Chip8
{
	/// @brief Facilitate the storage of register values and their easy access and modification.
	class Registers
	{
	    public:
		/// @brief Get the value of the program counter in binary.
		/// @return The program counter's value in binary.
		[[nodiscard]] auto program_counter() const -> Word const&;

		/// @brief Increment the program counter to point to the next word in memory.
		void increment_program_counter_to_next_word();

	    private:
		// special registers:
		Word program_counter_{};
		Word index_register_{};
		std::byte delay_time_{};
		std::byte sound_timer_{};
		// general purpose registers:
		std::byte v0_register_{};
		std::byte v1_register_{};
		std::byte v2_register_{};
		std::byte v3_register_{};
		std::byte v4_register_{};
		std::byte v5_register_{};
		std::byte v6_register_{};
		std::byte v7_register_{};
		std::byte v8_register_{};
		std::byte v9_register_{};
		std::byte va_register_{};
		std::byte vb_register_{};
		std::byte vc_register_{};
		std::byte vd_register_{};
		std::byte ve_register_{};
		std::byte vf_register_{};
	};
}// namespace Chip8

#endif