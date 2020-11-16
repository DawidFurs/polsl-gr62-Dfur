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
	int sortowanie(string* file, int first, int second); // funkcja sortujaca dane z podzielonej tablicy
	void quicksort(string* file, int first, int second); // funkcja dzielaca tablice i wywo³ujaca sam¹ siebie tak zwana rekurencyjna
	int sortliczb(int tab[], int first, int second);
	void quicksortSL(int tab[], int first, int second);	
	double sortwektor(double* tab, int first, int second);
	void quicksortSwektor(double* tab, int first, int second);
};
