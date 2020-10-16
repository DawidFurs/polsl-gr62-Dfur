#pragma oncev
#include "Wektor.h"

class TablicaWektorow {
	Wektor* dl;
	int dlugosc;
public:
	TablicaWektorow(int dlugosc);
	TablicaWektorow(TablicaWektorow& tablicawektorow);
	TablicaWektorow(Wektor* dl, int dlugosc);

	~TablicaWektorow();

	void dodaj(TablicaWektorow& tabliacWektorow);
	bool porownaj(TablicaWektorow& tablicawektorow);
	void drukuj();
};