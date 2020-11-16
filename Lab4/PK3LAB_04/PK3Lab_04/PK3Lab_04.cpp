#include "Figury.h"
#include<iostream>
#include<string>
using namespace std;
int main(int argc, char* argv[])
{
    Szachownica* stol = new Szachownica;
    //stol->clear();
  // stol->display();

    Wieza w1;
    Goniec g1;

    //Figura* wsk = &w1;
    Figura* wsk = &g1;
    wsk->set(stol, 0, 0);



    stol->display();
    wsk->range();
    wsk->remove();
    stol->clear();
    wsk->set(stol, 2, 3);

    cout << endl;   cout << endl;
    stol->display();
    cout << endl;
    wsk->range();
    cout << endl;
    cout << endl;
    system("CLS");
    //2
    Szachownica* stol1 = new Szachownica, * stol2 = new Szachownica;//tworzenei dwoch szachownic
    Goniec g2;
    g2.set(stol1, 3, 3);
    stol1->display();
    cout << endl << endl;
    //goniec wieza
    Wieza w2;
    Figura* wsk2;
    wsk2 = &g2;
    wsk2->set(stol2, 3, 3);

    wsk2 = &w2;
    wsk2->set(stol2, 3, 2);
    stol2->display();
    //3
    cout << "zasieg wiezy" << endl;
    w2.range();
    cout << "zasieg gonca" << endl;
    g2.range();
    stol2->clear();

    return 0;

}
