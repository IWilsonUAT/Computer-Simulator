#include <iostream>
#include <fstream>
#include <string>
#include "Computer.h"
#include "Command_Shell.h"
#include "Memory.h"

void main()
{
	std::cout << "\n\n\t *** You have turned the computer on ***\n\n";
	std::cout << "\t\t WOULD YOU LIKE TO PLAY A GAME?\n\n";

	Command_Shell command_shell;
	std::cout << "Computer Read, What is your command?\n";
	std::string userCommand;
	getline(std::cin, userCommand);

	command_shell.IntakeCommandFromUser(userCommand);
	
}