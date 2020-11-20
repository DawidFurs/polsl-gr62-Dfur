#include "Figury.h"
#include<iostream>
#include<string>
using namespace std;
int main()
{

    Szachownica* stol1 = new Szachownica, * stol2 = new Szachownica;//tworzenei dwoch szachownic
    Goniec g;
    g.set(stol1, 3, 3);
    stol1->display();
    cout << endl << endl;
    //goniec wieza
    Wieza w;
    Figura* wsk;
    wsk = &g;
    wsk->set(stol2, 3, 3);

    wsk = &w;
    wsk->set(stol2, 3, 2);
    stol2->display();
    //3
    cout << "zasieg wiezy" << endl;
    w.range();
    cout << "zasieg gonca" << endl;
    g.range();
    stol2->clear();

    return 0;

}
