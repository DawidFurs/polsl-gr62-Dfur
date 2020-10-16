#pragma once
#include "TablicaWektorow.h"

TablicaWektorow::TablicaWektorow(int dlugosc) {
	if (dlugosc < 0) {
		cout << "Nie moze byc ujemna dlugosc"<<endl;
	}
	else{
		this->dlugosc = dlugosc;
	dl = new Wektor[dlugosc];
	}
}

TablicaWektorow::TablicaWektorow(TablicaWektorow& tablicawektorow) {
	dlugosc = tablicawektorow.dlugosc;
	dl = new Wektor[this->dlugosc];
	for (int i = 0; i < dlugosc; i++) {
		dl[i] = Wektor(tablicawektorow.dl[i].pobierzX(), tablicawektorow.dl[i].pobierzY());

	}


}

TablicaWektorow::TablicaWektorow(Wektor* dl, int dlugosc) {
	this->dlugosc = dlugosc;
	dl = new Wektor[this->dlugosc];
	for (int i = 0; i < dlugosc; i++) {
		this->dl[i] = Wektor(dl[i].pobierzX(), dl[i].pobierzY());

	}
}

TablicaWektorow::~TablicaWektorow() {
	delete dl;
	dl = nullptr;
}

void TablicaWektorow::dodaj(TablicaWektorow& tablicawektorow) {
	if (this->dlugosc == tablicawektorow.dlugosc) {
		for (int i = 0; i < this->dlugosc; i++) {
			this->dl[i].dodaj(tablicawektorow.dl[i]);
		}
	}
	else {
		cout << "Tablice nie pokrywaja sie";
	}
}

bool TablicaWektorow::porownaj(TablicaWektorow& tablicawektorow) {
	if (this->dlugosc == tablicawektorow.dlugosc) {
		for (int i = 0; i < this->dlugosc; i++) {
			if (!this->dl[i].porownaj(tablicawektorow.dl[i])) return false;
		}
		return true;
	}return false;
}

void TablicaWektorow::drukuj() {
	for (int i = 0; i < this->dlugosc; i++) {
		cout << "Wektor" << i << ": x= " << this->dl[i].pobierzX() << " y = " <<
			this->dl[i].pobierzY() << "dlugosc = " << this->dl[i].pobierzDlugoscWektora()
			<< "kierunek = " << this->dl[i].pobierzkierunek();

	}




}