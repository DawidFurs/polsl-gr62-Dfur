#include <iostream>
#include <string>
#include "Server.h"
#include "Client.h"

using namespace std;


int main()
{




    Server server("Smail");
    //Serwer * s= new Serwer("Smail");
    Server* s;
    s = &server;
    Client Cl1(&server, "Andrzej");
    Client Cl2(s, "Monika");
    Cl2.wyslij("Halo");
    Cl1.wyslij("Witam");
    Cl2.wyslij("Czy wszystko w porzadku?");
    Cl1.wyslij("Tak jak najbardziej");
    cout << "Ilosc wiadomosci na serwerze: " << server.getlicznik() << endl;



    return 0;
}