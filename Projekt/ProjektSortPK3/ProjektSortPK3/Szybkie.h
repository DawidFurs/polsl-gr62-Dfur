#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include "ReadFile.h"

using namespace std;

class Szybkie :public ReadFile
{
public:
	int first = 0;
	int sortowanie(string* file, int first, int second);
	string quicksort(string* file, int first, int second);
};
