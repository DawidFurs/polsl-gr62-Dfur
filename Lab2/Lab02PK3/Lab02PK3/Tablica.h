#pragma once
#include <iostream>
#include "Punkt.h"

class Tablica
{
	Punkt* w;
	int dl; // dlugość Tablicy			
public:
	Tablica(int dl = 0); // tworzy Tablice o zadanej długości i wypełnia punktami (0,0)			
	Tablica(Tablica& w_); //inicjalizacja za pomocą Tablicy w_			
	Tablica(float* x, float* y, int dl); // inicjalizacja tablicy punktów tablicami x -ów i y -ów			

	~Tablica();

	void dodaj(Tablica& w_);// dodaje do siebie Tablice w_			

	bool porownaj(Tablica& w);// porownnaie z Tablica w_;	

	void drukuj();

	bool operator== (Tablica& a);
};