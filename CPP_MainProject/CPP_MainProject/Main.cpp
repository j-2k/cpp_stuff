#include <iostream>
#include "Log.h"
#include <iomanip>
#include <string>
#include <vector>
#include <algorithm>

int ManyNumbers(std::vector<int> a)
{
	std::sort(a.begin(), a.end());
	//sorted = 10 30 60 90 100
	//index =  0 1 2 3 4
	
	for (size_t i = 0; i < a.size(); i++)
	{
		std::cout << a[i] << " ";
	}

	std::cout << std::endl << a.size() << std::endl;

	std::cout << a[a.size()/2] << " size/ < | size() >  " << a.size() << std::endl;

	std::cout << a[1];

	std::cout << std::endl;
	return 0;
}

int main()
{

	std::vector<int> nums = { 100,90,30,10,60 };
	ManyNumbers(nums);


	std::cout << std::endl << std::endl << std::endl;

	int aNum = 10;
	int* ptr = &aNum; // point to the memory address of aNum
	std::cout << aNum << " " << ptr << std::endl;
	*ptr = 20;			// dereference ptr and change the value of it to 20
	std::cout << aNum << " " << ptr << std::endl;
	AddToPointer(ptr, 100);
	AddToReference(*ptr, 100);
	std::cout << aNum << " " << ptr << " " << &aNum << " " << *ptr << std::endl;

	int bNum = 50;
	int& ref = bNum;
	int* ptrB = &bNum;
	ref = 40;

	std::cout << ref << " " << bNum << " " << ptrB << std::endl;

	AddToReference(bNum, 100);

	std::cout << ref << " " << bNum << " " << ptrB << std::endl;

	AddBy(ptrB, 10);

	AddBy(*ptrB, 10);

	std::cout << ref << " " << bNum << " " << ptrB << std::endl;

	char c = 'C';
	char* cPTR = &c;
	char** cPTRPTR = &cPTR;

	std::cout << c << " " << *cPTR << " " << &cPTR << " " << **cPTRPTR << " " << &cPTRPTR << std::endl; //*cPTRPTR this value?


	std::cout << std::endl << std::endl << std::endl;

	std::string str("Some string");
	std::cout << str << std::endl;
	std::cout << str[0] << str[1] << std::endl;

	std::string hour = ("helo");
	std::cout << hour[0] << hour[1] << std::endl;

	std::string hourOnly = hour.substr(0, 2);
	std::cout << hour << " << hour" << std::endl;
	std::cout << hourOnly << " << hourOnly resized hour" << std::endl;

	std::cout << str[str.length() - 2] << std::endl;

	str.resize(str.size() - 2);

	std::cout << "Resized = " << str << std::endl;

	if (str[str.length() - 2] == 'n')
	{
		std::cout << "Detected n as sec last" << std::endl;
	}


	StartLog();
	Log("Hello World!");
	std::cin.get();
}