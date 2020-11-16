#include <iostream>
#include <fstream>
#include <string>
#include "ReadFile.h"
#include "Wstawianie.h"
#include "Wybieranie.h"
#include "Bombelkowe.h"
#include "Szybkie.h"
#include "Punkt.h"
using namespace std;

int main()
{
    Wstawianie b;
    Wybieranie c;
    Bombelkowe d;
    Szybkie e;
    Punkt f;
    setlocale(LC_ALL, "");
    string* posortowac; int* wiecejDanych; double* wektory; double* iloscwkt;
    int wyrazy, punkty , wybor, wybor_2;
    ReadFile a;
    wyrazy = a.count(); punkty = f.ReadFile::count_2();
    posortowac = a.load(wyrazy);
    wiecejDanych = a.load_2();
    wektory = f.ReadFile::load_3(punkty);
    iloscwkt = f.wektor(wektory, punkty);
    a.moreData();


    cout << "Dostępne algorytmy:" << endl << "1. Proste wstawianie" << endl << "2. Proste wybieranie" << endl << "3. Sortowanie bombelkowe" << endl << "4. Sortowanie szybkie" << endl<< "5. Sortowanie Wektorów"<<endl;
    cout << "Wybierz algorytm, którym chcesz posortować swoje dane: ";
    cin >> wybor;
    switch (wybor) {
    case 1:
        b.sortowanie(wyrazy, posortowac);
        b.wpisz(wyrazy, posortowac);
        b.pytanie();
        b.sortliczb(dane, wiecejDanych);
        b.wpisz_2(wiecejDanych);
        break;
    case 2:
        
        c.sortowanie(wyrazy, posortowac);
        c.wpisz(wyrazy, posortowac);
        c.pytanie();
        c.sortliczb(dane, wiecejDanych);
        c.wpisz_2(wiecejDanych);
        break;
    case 3: {
        d.sortowanie(wyrazy, posortowac);
        d.wpisz(wyrazy, posortowac);
        d.pytanie();
        d.sortliczb(dane, wiecejDanych);
        d.wpisz_2(wiecejDanych);
    }
          break;
    case 4: {
        e.quicksort(posortowac, 0, (wyrazy - 1));
        e.wpisz(wyrazy, posortowac);
        e.pytanie();
        e.quicksortSL(wiecejDanych,0,dane-1);
        e.wpisz_2(wiecejDanych);
    }
          break;
    case 5: {
        cout << "Wybierz algorytm którym chcesz posortować długości wektorów" << endl << "1. Wstawianie"<<endl<<"2. Wybieranie"<<endl<<"3. Bombelkowe" <<endl<<"4. Szybkie"<<endl;
        cin >> wybor_2;
        if (wybor_2 == 1) {
            f.Wstawianie::sortwektor(punkty, iloscwkt);
            f.ReadFile::wpisz_3(punkty, iloscwkt);
        }
        else if (wybor_2 == 2) {
            f.Wybieranie::sortwektor(punkty, iloscwkt);
            f.ReadFile::wpisz_3(punkty, iloscwkt);
        }
        else if (wybor_2 == 3) {
            f.Bombelkowe::sortwektor(punkty, iloscwkt);
            f.Bombelkowe::wpisz_3(punkty, iloscwkt);
        }
        else if (wybor_2 == 4) {
            f.Szybkie::quicksortSwektor(iloscwkt, 0, (punkty/2));
            f.Szybkie::wpisz_3(punkty, iloscwkt);
        }
    }
          break;
    default: cout << "Taka opcja nie istnieje.";
    }



    delete[] posortowac;
    delete[] wiecejDanych;
    delete[] wektory;
    delete[] iloscwkt;

    return 0;
}