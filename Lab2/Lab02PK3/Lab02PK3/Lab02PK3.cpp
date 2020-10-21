

#include <iostream>
#include "Punkt.h"

int main()
{
	Punkt a(4,5), b(4.3, 5.6);
	a += b;
	a.drukuj();
	Punkt x;
	x = a;
	x.drukuj();
	cout << (a == x) << endl;
	cout << (a == b) << endl;
	x = a + b;
	(a + b).drukuj();

	return 0;
}


