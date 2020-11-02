#pragma once
#include <iostream>
#include "Client.h"

using namespace std;

const int N = 100;
class Server
{
    friend class Client;
    Client* baza[N];
    string nazwa;
    int licznik;
    int odbierz(Client* c, string msg);

public:
    Server(string nazwa = "noname");
    int getlicznik();
};