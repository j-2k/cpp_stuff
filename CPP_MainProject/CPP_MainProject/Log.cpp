#include <iostream>

void Log(const char* msg)
{
	std::cout << msg << std::endl;
}

void StartLog()
{
	Log("Start Log From LogCPP");
}

void AddToReference(int& numberToAdd, int addBy)
{
	numberToAdd += addBy;
}

void AddToPointer(int* numberToAdd, int addBy)
{
	*numberToAdd += addBy;
}

void AddBy(int& numberToAdd, int addBy)
{
	numberToAdd += addBy;
}

void AddBy(int* numberToAdd, int addBy)
{
	*numberToAdd += addBy;
}