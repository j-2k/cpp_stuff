#pragma once //headerguard to stop duplication in each cpp file / translator

//put #include "Log.h" wherever you USE the log function.
void Log(const char* msg);

void StartLog();

void AddToReference(int& numberToAdd, int addBy);


void AddToPointer(int* numberToAdd, int addBy);

//overloading
void AddBy(int& numberToAdd, int addBy);
void AddBy(int* numberToAdd, int addBy);