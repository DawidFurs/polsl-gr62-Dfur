

#include <iostream>

using namespace::std;

class Punkt
{
	float x;
		float y;
public:
	Punkt(Punkt& p);
	Punkt(float x_ = 0, float y_ = 0);
	void dodaj(Punkt& p);//dodaje do siebie współrzędne punktu p (dodawanie wektorów w przestrzeni 2d )			
	void dodaj(Punkt* p);
	void drukuj();	
	// Pobieranie wartości x i y ze wzgledu na to ze znajduja sie poza obszarem public
	float pobierzX();
	float pobierzY();
	void ustawX(float x);
	void ustawY(float y);

};

/*


*/

class Tablica
{
	Punkt* w;
	int dl; // dlugość Tablicy			
public:
	Tablica(int dl = 0); // tworzy Tablice o zadanej długości i wypełnia punktami (0,0)			
	Tablica(Tablica& w_); //inicjalizacja za pomocą Tablicy w_			
	Tablica(float* x, float* y, int dl); // inicjalizacja tablicy punktów tablicami x -ów i y -ów			

	~Tablica();

	void dodaj(Tablica& w_);// dodaje do siebie Tablice w_			

	bool porownaj(Tablica &w);// porownnaie z Tablica w_;	

	void drukuj();
};

int main()
{
	//Dzialanie zad 1.
	cout << "Zad 1." << endl;
	Punkt a, b(3,6), c(5,8);
	a.drukuj();
	b.drukuj();
	c.drukuj();
	Punkt d(c);
	d.drukuj();
	b.dodaj(c);
	b.drukuj();
	Punkt* p;
	p = &b;
	p->dodaj(c);
	p->drukuj();
	b.drukuj();

	a.dodaj(p);
	a.drukuj();

	cout << "\n \n \n \n Zadanie 2.";

	Tablica tab(5), tablica;
	tab.drukuj();
	tablica.drukuj();

	float* x = new float[5];
	float* y = new float[5];
	x[0] = 5;
	x[1] = 2;
	x[2] = 6;
	x[3] = 8;
	x[4] = 1;
	y[0] = 6;
	y[1] = 12;
	y[2] = -5;
	y[3] = 3;
	y[4] = 8;
	Tablica tab1(x, y, 5);
	tab1.drukuj();

	float* c1 = new float[4];
	float* c2 = new float[4];
	float* d1 = new float[4];
	float* d2 = new float[4];
	
		c1[0] = 5;
		c1[1] = 7;
		c1[2] = -2;
		c2[0] = 9;
		c2[1] = 2;
		c2[2] = 51;
		d1[0] = 12;
		d1[1] = 2;
		d1[2] = 42;
		d2[0] = 3;
		d2[1] = 1;
		d2[2] = -17;

		Tablica tablica2(c1, d1, 3), tablica3(c2, d2, 3);
		tablica2.drukuj();
		tablica3.drukuj();
		cout << "Suma tablic";
		tablica2.dodaj(tablica3);
		tablica2.drukuj();

		Tablica tablica4(tablica2);
		cout<<"Czy tablice sa takie same?: "<<tablica4.porownaj(tablica2);




	return 0;
}

Punkt::Punkt(Punkt& p)
{
	x = p.x;
	y = p.y;
}

Punkt::Punkt(float x_, float y_)
{
	x = x_;
	y = y_;

}

void Punkt::dodaj(Punkt& p)
{
	x = x + p.x;
	y = y + p.y;
}

void Punkt::dodaj(Punkt* p)
{
	x = x + p->x;
	y = y + p->y;
}

void Punkt::drukuj()
{
	cout << "x: " << x <<endl<< "y: " << y<< endl;

}

float Punkt::pobierzX() {
	return x;
}

float Punkt::pobierzY() {
	return y;
}

void Punkt::ustawX(float x) {
	this->x = x;
}

void Punkt::ustawY(float y) {
	this->y = y;
}


Tablica::Tablica(int dl)
{
	if (dl <= 0) {
		cout << "Tablica nie moze byc ujemna ";
	}
	else {
		this->dl = dl;
			w = new Punkt[dl];
			

		
	}
}

Tablica::Tablica(Tablica& w_)
{
	dl = w_.dl;
	w = new Punkt[w_.dl];
	for (int i= 0; i < dl; i++) {
		w[i] = w_.w[i];
	}
}

Tablica::Tablica(float* x, float* y, int dl)
{
	this->dl = dl;
	w = new Punkt[dl];
	for (int i = 0; i < dl; i++) {
		Punkt punkt(x[i], y[i]);
			w[i] = punkt;
	}

}

Tablica::~Tablica() {
	delete w;
	w = nullptr;
}

void Tablica::dodaj(Tablica& w_)
{
	if (dl == w_.dl) {
		for (int i = 0; i < dl; i++) {
			w[i].ustawX(w[i].pobierzX() + w_.w[i].pobierzX());
			w[i].ustawY(w[i].pobierzY() + w_.w[i].pobierzY());
		}
	}
	else {
		cout << "Nie zgadza sie dlugosc tablic" << endl;
	}
}

bool Tablica::porownaj(Tablica& w)
{
	if (dl == w.dl) {
		for (int i = 0; i < dl; i++) {
			if (this->w[i].pobierzX() != w.w[i].pobierzX()) return false;
			if (this->w[i].pobierzY() != w.w[i].pobierzY()) return false;
		}
	}
	else {
		return false;
	}

	return true;
}

void Tablica::drukuj()
{
	for (int i = 0; i < dl; i++) {
		cout << "x: " << w[i].pobierzX()<<" " << "y: " << w[i].pobierzY()<<endl;
	}
}



