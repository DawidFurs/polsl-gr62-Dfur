#pragma once
#include "Server.h"

Server::Server(string nazwa) {
	licznik = 0;
	this->nazwa = nazwa;
	*baza = new Client[N];
}

int Server::odbierz(Client* c, string msg) {
	cout << "Odebranie wiadomosci: " << msg << " od " << c->nazwa << endl;
	baza[licznik++] = c;
	if (licznik >= N)
		return 0;
	return 1;
}

int Server::getlicznik() {
	return licznik;
}