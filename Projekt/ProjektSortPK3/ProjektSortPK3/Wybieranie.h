#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include "ReadFile.h"

using namespace std;

class Wybieranie :public ReadFile
{
public:
	string sortowanie(int w, string* file);
};
