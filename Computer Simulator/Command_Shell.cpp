#include "Command_Shell.h"
#include <iostream>

void Command_Shell::IntakeCommandFromUser(std::string commandInput)
{
	ProcessCommand(commandInput);
}

void Command_Shell::ProcessCommand(std::string commandToProcess)
{
	if (commandToProcess == "Help")
	{
		DisplayHelp();
	}
	else if (commandToProcess == "DisplayMem")
	{
		//TODO: Display Memory
	}
	else if (commandToProcess == "Load")
	{
		//TODO: stuff program form file into memory
	}
	else if (commandToProcess == "Run")
	{
		//TODO: Start and run code
	}
	else if (commandToProcess == "Exit")
	{
		//TODO: Exit this shell which is like turning off the computer
	}
	else
	{
		std::cout << "\n\nI'm sorry but that is not a viable command\n\n";
	}
}

void Command_Shell::DisplayHelp()
{
	std::cout << "\n\n\t ### Help Menu ###\n";
	std::cout << "\n Help - Displays this Help Menu";
	std::cout << "\n Load - Loads a program into memory";
	std::cout << "\n Run - Runs the program in memory";
	std::cout << "\n DisplayMem - Displays all Memory Locations";
	std::cout << "\n Exit - Exits this Shell";
}
