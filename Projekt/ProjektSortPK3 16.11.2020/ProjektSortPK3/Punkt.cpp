#include "Punkt.h"

double* Punkt::wektor(double x[], int w)
{
	double* wektor = new double [w];
	for (int i = 0, j=0; i < w ; i=i+2, j++) {
		wektor[j] = sqrt(pow(x[i], 2) + pow(x[i + 1], 2));
	}
	return wektor;
}
