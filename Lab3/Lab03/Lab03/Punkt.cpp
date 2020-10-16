#pragma once
#include "Punkt.h"

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
	cout << "x: " << x << endl << "y: " << y << endl;

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
