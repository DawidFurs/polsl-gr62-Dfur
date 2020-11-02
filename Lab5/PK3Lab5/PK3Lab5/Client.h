#pragma once
#include <iostream>
#include "Server.h"
using namespace std;

class Server;

class Client
{
    friend class Server;
    Server* s;
    string nazwa;
public:
    Client(Server& s, string nazwa); 
    Client(Server* s, string nazwa);
    Client();
    int wyslij(string msg);  //   , Client * cli=this

};