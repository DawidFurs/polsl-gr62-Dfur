#include "Figury.h"
//#include "lib_szach.h"

void Szachownica::clear() {
    for (int i = 0; i < 8; i++)
        for (int j = 0; j < 8; j++)
        {
            wiz[i][j] = '.';
            sz[i][j] = NULL;
        };
};

void Szachownica::display() {
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
            cout << wiz[i][j];
        cout << endl;
    }
}
void Wieza::range() {

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++) {
            if (i == x) { cout << "x"; }
            else if (j == y) { cout << "x"; }
            else
                cout << ".";
        }
        cout << endl;
    }
}
void Goniec::range() {
    int dx[4] = { -1, -1, 1, 1 };
    int dy[4] = { -1, 1, -1, 1 };
    char taab[8][8];
    for (int i = 0; i < 8; i++)
        for (int j = 0; j < 8; j++)
            taab[i][j] = '.';

    for (int kierunek = 0; kierunek < 4; kierunek++) { //4 kierunki w ktore moze poruszac sie goniec
        for (int miejsce = 1; miejsce < 8; miejsce++) {//liczenie gdie bd goniec

            int new_x, new_y;
            new_x = x + dx[kierunek] * miejsce;
            new_y = y + dy[kierunek] * miejsce;

            if (new_x >= 0 && new_x < 8 && new_y >= 0 && new_y < 8) {//czy jest na planszy
                taab[new_x][new_y] = 'x';
            }

        }
    }
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++) {
            cout << taab[i][j];
        }
        cout << endl;
    }
}