#pragma once

class Memory
{
public:
	void SetRAMValue(int address, int value);
	int GetRAMValue(int address);
private:
	// 0-99
	int RAM[100];
};

