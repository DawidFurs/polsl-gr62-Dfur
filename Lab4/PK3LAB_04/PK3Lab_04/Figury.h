#pragma once
#include<iostream>
using namespace std;

class Szachownica
{
    friend class Figura;
protected:
    Figura* sz[8][8];// tablica kontrolna zawierajaca wskazniki do ustawionych figur
    // NULL w przypadku gdy pole jest puste;
    char wiz[8][8];// tablica do wizualizacji : 'O' pole puste 'X' pole bite , 'G'- polozenie gonca,
    // 'W' - polozenie wiezy; zapisywane przez metode range klasy Figura
public:
    Szachownica()// tworzy pusta szachownice: pola w tablicy sz ustawione na NULL , w tablicy wiz na 'O'
    {
        clear();
    }
    void showRange(); // metoda wywoluje na wszystkich polach tablicy sz (roznych od NULL)
    //metode wirtualna range
    void display(); // wyswietla szachownnice (tablica wiz)
    void clear();// tworzy pusta szachownice, wywoluje metode remove na wszystkich polach tablicy sz (roznych od NULL)
  // UWAGA usuniecie figury nie oznacza usuniecie z pamieci - nie wywolujemy delete

};

class Figura
{
protected:
    Szachownica* s; //figura zna swoja szachownice - ustawiane przez set
    int x, y; // polozenie na szachownicy ustawiane przez set
    bool set(int x, int y, char z)//pomocnicza uzywana przez range i set w sekcji public
                                 //UWAGA:(friend nie jest dziedziczony)
    {
        s->wiz[x][y] = z;//sprawdzic czy pole nie jest zajete (zwracamy wtedy false)
        return true;
    };
    bool set(int x, int y, Figura* f)// ustawia pole x,y tablicy sz na wskaznik do klasy dziedziczacej z klasy Figura (Wieza , Goniec)
    {
        s->sz[x][y] = f;//sprawdzic czy pole nie jest zajete (zwracamy wtedy false)
        return true;
    };

public:
    Figura() {
        x = y = 0;
        s = NULL;
    };
    virtual bool set(Szachownica* s, int x_, int y_) = 0; //metoda ustawia figure na szachownicy
    // zwraca false gdy pole jest zajete
    // w tablicy wiz ustawia 'W' lub 'G' (dalsza czesc zadania)
    // za pomoca set(int x,int y,Figura *f) ustawia pole w tablicy sz.

    void remove()
    {

        s->sz[x][y] = NULL;
        s = NULL;
        //s->wiz[x][y] = '.'; //po co to xd 
        s = NULL;// ustawia s na NULL - figura zdjeta z szachownicy
    };
    virtual void range() = 0;//pokazuje zasieg bicia na szachownicy - operuje na tablicy wiz
// klasy Szachownica

};

class Wieza : public Figura {
public:
    ~Wieza() {}
    Wieza() :Figura() {}
    virtual bool set(Szachownica* s_, int x_, int y_)
    {
        s = s_;
        if (Figura::set(x_, y_, 'W'))
        {
            x = x_; y = y_;
        }
        // wywolac set(int x,int y,Figura *f) z odpowiednim parametrem
        return true;
    }
    virtual void range();//zdefiniowac zasieg bicia dla Wiezy
};


class Goniec : public Figura
{
public:
    ~Goniec() {}
    Goniec() :Figura() {}
    virtual bool set(Szachownica* s_, int x_, int y_) {
        s = s_;
        if (Figura::set(x_, y_, 'G')) {
            x = x_;
            y = y_;
        }
        return true;
    }
    virtual void range();
};