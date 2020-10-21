#pragma once
#include <iostream>
using namespace std;
class Punkt
{
	float x;
	float y;
public:
	Punkt(Punkt& p);
	Punkt(float x_ = 0, float y_ = 0);
	void dodaj(Punkt& p);//dodaje do siebie wspó³rzêdne punktu p (dodawanie wektorów w przestrzeni 2d )			
	void dodaj(Punkt* p);
	void drukuj();
	// Pobieranie wartoœci x i y ze wzgledu na to ze znajduja sie poza obszarem public
	float pobierzX();
	float pobierzY();
	void ustawX(float x);
	void ustawY(float y);


	void operator+= (Punkt& a );
	void operator= (Punkt& a);
	bool operator== (Punkt& a);
	Punkt operator+ (Punkt& a);


};
