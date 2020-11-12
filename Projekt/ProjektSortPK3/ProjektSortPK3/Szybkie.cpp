#include "Szybkie.h"

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

string Szybkie::quicksort(string* file, int first, int second)
{
	int p;
	if (first < second)
	{
		p = sortowanie(file, first, second);
		quicksort(file, first, p);
		quicksort(file, p + 1, second);


	}
	return string(*file);
}
