#include "Tablica.h"

Tablica::Tablica(int dl)
{
	if (dl <= 0) {
		cout << "Tablica nie moze byc ujemna ";
	}
	else {
		this->dl = dl;
		w = new Punkt[dl];



	}
}

Tablica::Tablica(Tablica& w_)
{
	dl = w_.dl;
	w = new Punkt[w_.dl];
	for (int i = 0; i < dl; i++) {
		w[i] = w_.w[i];
	}
}

Tablica::Tablica(float* x, float* y, int dl)
{
	this->dl = dl;
	w = new Punkt[dl];
	for (int i = 0; i < dl; i++) {
		Punkt punkt(x[i], y[i]);
		w[i] = punkt;
	}

}

Tablica::~Tablica() {
	delete w;
	w = nullptr;
}

void Tablica::dodaj(Tablica& w_)
{
	if (dl == w_.dl) {
		for (int i = 0; i < dl; i++) {
			w[i].ustawX(w[i].pobierzX() + w_.w[i].pobierzX());
			w[i].ustawY(w[i].pobierzY() + w_.w[i].pobierzY());
		}
	}
	else {
		cout << "Nie zgadza sie dlugosc tablic" << endl;
	}
}

bool Tablica::porownaj(Tablica& w)
{
	if (dl == w.dl) {
		for (int i = 0; i < dl; i++) {
			if (this->w[i].pobierzX() != w.w[i].pobierzX()) return false;
			if (this->w[i].pobierzY() != w.w[i].pobierzY()) return false;
		}
	}
	else {
		return false;
	}

	return true;
}

void Tablica::drukuj()
{
	for (int i = 0; i < dl; i++) {
		cout << "x: " << w[i].pobierzX() << " " << "y: " << w[i].pobierzY() << endl;
	}
}