#include "Wybieranie.h"

string Wybieranie::sortowanie(int w, string* file)
{
	int pom, licznik=0;
	for (int i = 0; i < w; i++)
	{
		pom = i;
		for (int j = i +1; j < w; j++)
		{
			if (file[j] < file[pom])
				pom = j;
			swap(file[pom], file[i]);
			licznik++;
		}
	}
	cout << licznik;
	return string(*file);
}

int Wybieranie::sortliczb(int w, int* tab)
{
	int pom;
	for (int i = 0; i < w; i++)
	{
		pom = i;
		for (int j = i + 1; j < w; j++)
		{
			if (tab[j] < tab[pom])
				pom = j;
			swap(tab[pom], tab[i]);
		}
	}
	return *tab;
}

double Wybieranie::sortwektor(int w, double* tab)
{
	int pom, g=w/2;
	for (int i = 0; i < g; i++)
	{
		pom = i;
		for (int j = i + 1; j < g; j++)
		{
			if (tab[j] < tab[pom])
				pom = j;
			swap(tab[pom], tab[i]);
		}
	}
	return *tab;
}