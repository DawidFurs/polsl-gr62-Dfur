#pragma once
#include "Client.h"


Client::Client(Server& s, string nazwa)
    {
    this->s = &s;
    this->nazwa = nazwa;
    }



Client::Client(Server* s, string nazwa) {
    this->s = s;
    this->nazwa = nazwa;
}

Client::Client() {
    s = nullptr;
    nazwa = "";
}

int Client::wyslij(string msg){
    return s->odbierz(this, msg);
}