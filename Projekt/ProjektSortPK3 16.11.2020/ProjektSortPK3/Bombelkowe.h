#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include "ReadFile.h"

using namespace std;

class Bombelkowe :public ReadFile
{
public:
	string sortowanie(int w, string* file); //sort wyrazow
	int sortliczb(int w, int* tab);	//sort liczb
	double sortwektor(int w, double* tab); //sort wektorow
};