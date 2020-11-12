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
