#include "Szybkie.h"

void Szybkie::quicksort(string* file, int first, int second)
{
	int p;
	if (first < second)
	{
		p = sortowanie(file, first, second);
		quicksort(file, first, p);
		quicksort(file, p + 1, second);


	}
}

int Szybkie::sortowanie(string* file, int first, int second)
{
	string x = file[first], w;
	int i = first, j = second;
	while (true)
	{
		while (file[j] > x)
			j--;
		while (file[i] < x)
			i++;
		if (i < j)
		{
			w = file[i];
			file[i] = file[j];
			file[j] = w;
			i++;
			j--;
		}
		else 
			return j;


	}

}


void Szybkie::quicksortSL(int tab[], int first, int second)
{
	int p;
	if (first < second)
	{
		p = sortliczb(tab, first, second);
		quicksortSL(tab, first, p - 1);
		quicksortSL(tab, p + 1, second);


	}
}

int Szybkie::sortliczb(int tab[], int first, int second) 
{
	int x = tab[first], w;
	int i = first, j = second+1;
	do {
		do
			i++;
		while (tab[i] < x && i <= second);
		do
			j--;
		while (x < tab[j]);
		if (i < j) {
			w = tab[i];
			tab[i] = tab[j];
			tab[j] = w;
		}
	} while (i < j);
	tab[first] = tab[j];
	tab[j] = x;
	return j;
}

void Szybkie::quicksortSwektor(double* tab, int first, int second)
{
	int p;
	if (first < second)
	{
		p = sortwektor(tab, first, second);
		quicksortSwektor(tab, first, p - 1);
		quicksortSwektor(tab, p + 1, second);


	}
}

double Szybkie::sortwektor(double* tab, int first, int second)
{
	double x = tab[first], w;
	int i = first, j = second + 1;
	do {
		do
			i++;
		while (tab[i] < x && i <= second);
		do
			j--;
		while (x < tab[j]);
		if (i < j) {
			w = tab[i];
			tab[i] = tab[j];
			tab[j] = w;
		}
	} while (i < j);
	tab[first] = tab[j];
	tab[j] = x;
	return j;
}

