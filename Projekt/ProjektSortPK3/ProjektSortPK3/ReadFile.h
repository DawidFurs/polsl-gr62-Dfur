#pragma once
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <fstream>
#include <string>

using namespace std;

const int dane = 1000;

class ReadFile {
public:
	int count();
	string* load(int w);
	void write(string* wypisz, int a);
	string* wpisz(int w, string* file);
	void moreData();
	string* load_2();
	void pytanie();
	string* wpisz_2( string* file);
};