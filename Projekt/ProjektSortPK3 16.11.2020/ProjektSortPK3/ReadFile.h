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
	int count(); //zliczanie wyrazow w pliku
	string* load(int w); // zapisanie wyrazow z pliku do tablicy
	void write(string* wypisz, int a); // wypisanie do konsoli, metoda tylko i wy³acznie do sprawdzania czy kod dzia³a dobrze
	string* wpisz(int w, string* file); // metoda zapisujaca tablice do pliku tekstowego
	void moreData(); // metoda losujaac wieecj danych
	int* load_2();
	void pytanie(); // metoda zadajaca pytanie 
	int* wpisz_2( int* file);
	int count_2();
	double* load_3(int w);
	double* wpisz_3(int w, double* file);
};