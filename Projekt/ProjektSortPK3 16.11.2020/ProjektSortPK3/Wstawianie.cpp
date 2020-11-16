#include "Wstawianie.h"

string Wstawianie::sortowanie(int w, string* file)
{
	int b, licznik=0;

	string pom;
	for (int i = 1; i < w; i++) {
		pom = file[i];
		b = i - 1;

		while (b >= 0 && file[b] > pom) {
			file[b + 1] = file[b];
			--b;
			licznik++;
		}

		file[b + 1] = pom;
	}
	cout << licznik;
	return string(*file);
}


int Wstawianie::sortliczb(int w, int* tab)
{
	int b, pom;

	
	for (int i = 1; i < w; i++) {
		pom = tab[i];
		b = i - 1;

		while (b >= 0 && tab[b] > pom) {
			tab[b + 1] = tab[b];
			--b;
		}

		tab[b + 1] = pom;
	}
	return *tab;
}

double Wstawianie::sortwektor(int w, double* tab)
{
	double pom;
	int b, g=w/2;


	for (int i = 1; i < g; i++) {
		pom = tab[i];
		b = i - 1;

		while (b >= 0 && tab[b] > pom) {
			tab[b + 1] = tab[b];
			--b;
		}

		tab[b + 1] = pom;
	}
	return *tab;
}
