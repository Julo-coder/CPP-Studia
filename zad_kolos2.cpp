#include <iostream>
using namespace std;

/*
zad 1
dwuwymiarowa tablica typu int. Zastępowanie warotości danej liczby jej wartością bitową.
*/



void zmianaLiczby(int tablica[][4], int wier, int kol){
    int jedynki = 0;
    for(int i = 0; i < wier; i++){
        for(int j = 0; j < kol; j++){
            for(unsigned maska = 0x80000000; maska; maska >>= 1){
                if(tablica[i][j] & maska){
                    jedynki++;
                }
            }
            tablica[i][j] = jedynki;
            jedynki = 0;
        }
    }

    for(int k = 0; k < wier; k++){
        for(int z = 0; z < kol; z++){
            cout << tablica[k][z] << " ";
        }
        cout << "|" << " ";
    }
    
}

/*
zad 2
Iloczyn przystych liczb
rekurencyjna funkcja zwaracjąca illoczyn liczb parzystych zprzedziału 2 do N (liczba jako argument funkcji). Jeśli argument jest nie poprawny N przyjmuje wartość 0;
*/

/*zad 3
Sortowanie poprze wstawienie. 
*/

void sortowankoRazDwaTrzy(int tab[], int rozm){
    int key, j;
    for (int i = 1; i < rozm; i++) {
        key = tab[i];
        j = i - 1;
        while (j >= 0 && tab[j] > key) {
            tab[j + 1] = tab[j];
            j = j - 1;
        }
        tab[j + 1] = key;
        for (int z = 0; z < rozm; z++) {
            cout << tab[z] << " ";
        }
        cout << endl;
    }

    for (int z = 0; z < rozm; z++) {
        cout << tab[z] << " ";
    }
}


int main(){
    int zad;
    cin >> zad;
    switch (zad){
    case 1:{
        const int wier = 3;
        const int kol = 4;
        int tablica[wier][kol];
        for(int i = 0; i < wier; i++){
            for(int j = 0; j < kol; j++){
                cin >> tablica[i][j];
            }
        }
        zmianaLiczby(tablica, wier, kol);
    }
        break;
    case 2:{

    }
        break;
    case 3:{
        const int rozm = 8;
        int tablica[rozm];

        for(int k = 0; k < rozm; k++){
            cin >> tablica[k];
        }

        sortowankoRazDwaTrzy(tablica, rozm);
    }
        break;
    default:
        break;
    }
}

