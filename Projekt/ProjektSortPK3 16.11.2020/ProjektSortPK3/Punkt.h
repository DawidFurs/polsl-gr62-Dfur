#pragma once
#include <math.h>
#include <iostream>
#include <fstream>
#include <string>
#include "ReadFile.h"
#include "Wstawianie.h"
#include "Wybieranie.h"
#include "Bombelkowe.h"
#include "Szybkie.h"

using namespace std;

class Punkt : public Wstawianie, public Wybieranie, public Bombelkowe, public Szybkie{
public:
	double* wektor(double x[], int w); // zamiana punktow na wektory
};