#pragma once
#include <iostream>
#include "Punkt.h"

using namespace::std;

class Wektor : public Punkt {
	double dlugoscWektora;
		double kierunek;

public:
	Wektor(float x=0, float y=0);
	Wektor(float x, float y, Punkt& punkt);


	void dodaj(Wektor& wektor);
	void dodaj(Wektor* wektor);
	float pobierzDlugoscWektora();
	float pobierzkierunek();
	bool porownaj(Wektor &wektor);

};
