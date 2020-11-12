#include <iostream>
#include <fstream>
#include <string>
#include "ReadFile.h"
#include "Wstawianie.h"
#include "Wybieranie.h"
#include "Bombelkowe.h"
#include "Szybkie.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    string* posortowac; string* wiecejDanych;
    int wyrazy, X;
    ReadFile a;
    wyrazy = a.count();
    posortowac = a.load(wyrazy);
    wiecejDanych = a.load_2();
    a.moreData();
    Wstawianie b;
    Wybieranie c;
    Bombelkowe d;
    Szybkie e;

    cout << "Dostępne algorytmy:" << endl << "1. Proste wstawianie" << endl << "2. Proste wybieranie" << endl << "3. Sortowanie bombelkowe" << endl << "4. Sortowanie szybkie" << endl;
    cout << "Wybierz algorytm, którym chcesz posortować swoje dane: ";
    cin >> X;
    switch (X) {
    case 1:
        b.sortowanie(wyrazy, posortowac);
        b.wpisz(wyrazy, posortowac);
        b.pytanie();
        b.sortowanie(dane, wiecejDanych);
        b.wpisz_2(wiecejDanych);
        break;
    case 2:
        
        c.sortowanie(wyrazy, posortowac);
        c.wpisz(wyrazy, posortowac);
        c.pytanie();
        c.sortowanie(dane, wiecejDanych);
        c.wpisz_2(wiecejDanych);
        break;
    case 3: {
        d.sortowanie(wyrazy, posortowac);
        d.wpisz(wyrazy, posortowac);
        d.pytanie();
        d.sortowanie(dane, wiecejDanych);
        d.wpisz_2(wiecejDanych);
    }
          break;
    case 4: {
        e.quicksort(posortowac, 0, (wyrazy - 1));
        e.wpisz(wyrazy, posortowac);
        e.pytanie();
        e.sortowanie(wiecejDanych,0,(dane-1));
        e.wpisz_2(wiecejDanych);
    }
          break;
    default: cout << "Taka opcja nie istnieje.";
    }



    delete[] posortowac;
    delete[] wiecejDanych;

    return 0;
}