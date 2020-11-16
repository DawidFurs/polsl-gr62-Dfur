#include "Bombelkowe.h"

string Bombelkowe::sortowanie(int w, string* file) {
	int licznik = 0;
	for (int i = 0; i < w; i++) {
		for (int j = 1; j < w; j++) {
			if (file[j - 1] > file[j])
				swap(file[j - 1], file[j]);
			licznik++;
		}
	}
	cout << licznik;
	return string(*file);
}

int Bombelkowe::sortliczb(int w, int* tab)
{
	for (int i = 0; i < w; i++) {
		for (int j = 1; j < w; j++) {
			if (tab[j - 1] > tab[j])
				swap(tab[j - 1], tab[j]);
		}
	}
	return *tab;
}

double Bombelkowe::sortwektor(int w, double* tab)
{
	int g = w / 2;
	for (int i = 0; i < g; i++) {
		for (int j = 1; j < g; j++) {
			if (tab[j - 1] > tab[j])
				swap(tab[j - 1], tab[j]);
		}
	}
	return *tab;
}
