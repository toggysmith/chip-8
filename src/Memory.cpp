#include "Memory.hpp"

Chip8::Memory::Memory(u64 const memory_size_in_bytes)
{
	// NOTE: New elements as a result of std::vector::resize() are value-
	//       initialized, which in the case of std::byte means it is zero-
	//       initialized to 0b0000'0000. This is *not* undefined behaviour.
	memory_.resize(memory_size_in_bytes);
}