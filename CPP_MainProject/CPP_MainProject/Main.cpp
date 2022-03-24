#include <iostream>
#include "Log.h"

int main()
{
	//int var = 10; // 4 bytes > 2b <-> -2b~ | 1 byte = 8 bits => 32 bits = 1 bit for +- / 31 bits left for number 2^31 = 2.1b~ -1 for 0
	//unsigned int unsInt = 10;
	//char1byte, short2bytes, int4, float4/double8?, long4, long long8, (unsigned for pos only)

	//short a = 'A';
	//std::cout << a << std::endl;

	//float decNum = 1.2f; //(if no f it will be a double)

	bool boolTest = true; // 1 byte (tech 1 bit, cant manipulate bits only bytes)

	std::cout << sizeof(boolTest) << std::endl;
	std::cout << sizeof(float) << std::endl;
	std::cout << sizeof(long long) << std::endl;

	Log("Hello World!");
	std::cin.get();
}