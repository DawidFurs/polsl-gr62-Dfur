#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include "ReadFile.h"

using namespace std;

class Wstawianie :public ReadFile
{
public:
	string sortowanie(int w, string* file); // sortowanie wyrazow
	int sortliczb(int w, int* tab);	// sortowanie liczb
	double sortwektor(int w, double* tab);	//sortowanie wektorów
};