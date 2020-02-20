#pragma once
#include <string>
class Command_Shell
{
public:
	void IntakeCommandFromUser(std::string commandInput);

private:
	void ProcessCommand(std::string commandToProcess);
	void DisplayHelp();
};

