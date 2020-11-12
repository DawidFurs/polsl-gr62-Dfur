#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include "ReadFile.h"

using namespace std;

class Bombelkowe :public ReadFile
{
public:
	string sortowanie(int w, string* file);
};