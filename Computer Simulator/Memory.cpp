#include "Memory.h"
#include <iostream>

void Memory::SetRAMValue(int address, int value)
{
	if (value >= 9999)
	{
		RAM[address] = value;
	}
	else
	{
		std::cout << "\nI'm sorry but you can only input 4 bytes of memory, no more.\n";
	}
	
	
}

int Memory::GetRAMValue(int address)
{
	return RAM[address];
	
}

