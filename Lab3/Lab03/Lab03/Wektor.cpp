#pragma once
#include "Wektor.h"

Wektor::Wektor(float x, float y, Punkt& punkt) {
	ustawX(x);
	ustawY(y);
	dlugoscWektora = sqrt(pow(x * punkt.pobierzX(), 2) + pow((y * punkt.pobierzY()), 2));
	kierunek = y/x;
}

Wektor::Wektor(float x, float y) {
	ustawX(x);
	ustawY(y);
	dlugoscWektora = sqrt(x * x + y * y);
	kierunek = y / x;

}



void Wektor::dodaj(Wektor& wektor) {
	ustawX(pobierzX() + wektor.pobierzX());
	ustawX(pobierzY() + wektor.pobierzY());
	dlugoscWektora = sqrt(pobierzX() * pobierzX() + pobierzY() * pobierzY());
	kierunek = pobierzY() / pobierzX();
}


void Wektor::dodaj(Wektor* wektor) {
	ustawX(pobierzX() + wektor->pobierzX());
	ustawX(pobierzY() + wektor->pobierzY());
	dlugoscWektora = sqrt(pobierzX() * pobierzX() + pobierzY() * pobierzY());
	kierunek = pobierzY() / pobierzX();
}

bool Wektor::porownaj(Wektor& wektor) {
	if (this->pobierzX() == wektor.pobierzX() &&
		this->pobierzY() == wektor.pobierzY() &&
		this->pobierzDlugoscWektora() == wektor.pobierzDlugoscWektora() &&
		this->pobierzkierunek() == wektor.pobierzkierunek())
		return true;
	else
		return false;
}

float Wektor::pobierzDlugoscWektora() {
	return dlugoscWektora;
}

float Wektor::pobierzkierunek() {
	return kierunek;
}