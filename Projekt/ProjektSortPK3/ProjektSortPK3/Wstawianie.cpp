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
