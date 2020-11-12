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