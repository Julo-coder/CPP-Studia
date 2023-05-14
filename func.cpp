#include <iostream>
using namespace std;

/*
Napisz i wywołaj funkcję, która jako argumenty wejściowe przyjmuje przynajmniej tablicę typu int oraz jej rozmiar. 
Zadaniem funkcji jest obliczenie średniej arytmetycznej oraz wariancji. 
W funkcji main() proszę zdefiniować rozmiar tablicy równy 4 oraz zadeklarować tablicę, której elementy są wprowadzane przez użytkownika BEZ poprzedzającego komunikatu.  
W funkcji main() program wyświetla TYLKO średnią arytmetyczną oraz wariancję (oddzielone spacją). Np. dla tablicy [2 2 2 6] program wyświetli 3 3. 
UWAGA: Obie wartości obliczone wewnątrz funkcji powinny zostać przekazane do funkcji main() podczas pojedynczego wywołania napisanej funkcji.
*/

int sredWarian(int rozm, int tab[], int &wariancja){
    int srednia = 0;
    wariancja = 0;
    int pier_sklad = 0;
    for(int i = 0; i < rozm; i++){
        srednia += tab[i];
    }
    srednia /= rozm;
    for(int w = 0; w < rozm; w++){
        pier_sklad += (tab[w] - srednia)*(tab[w] - srednia);
    }

    wariancja = pier_sklad / rozm;
    return srednia;
}

/*
Napisz i wywołaj funkcję wykorzystującą co najmniej dwa operatory bitowe, która jako argumenty wejściowe przyjmuje tablicę typu int oraz jej rozmiar. 
Funkcja zwraca element tablicy, który posiada największą liczbę jedynek w swojej reprezentacji binarnej. 
W funkcji main() proszę zdefiniować rozmiar tablicy równy 10 oraz zadeklarować tablicę, której elementy są wprowadzane przez użytkownika BEZ poprzedzającego komunikatu.  
W funkcji main() program wyświetla TYLKO wynik działania funkcji czyli element tablicy, który posiada najwięcej jedynek w swojej reprezentacji binarnej. 
W przypadku gdy dwa lub więcej elementów posiada taką samą liczbę jedynek w swojej reprezentacji bitowej, funkcja zwraca ten, który występuje pod najmniejszym indeksem tablicy. 
Przykładowo, dla tablicy [0 1 2 3 4 5 6 7 8 14] program wyświetli 7.
*/

int liczJeden(int tab[], int rozm){
    int jedynka = 0;
    int najwiecej_jeden = 0;
    int wart_indeks = 0; 
    for(int i = 0; i < rozm; i++){
        for(unsigned mask = 0x80000000; mask; mask >>= 1){
            if(tab[i] bitand mask){
                jedynka++;
            }
        }
        if(najwiecej_jeden < jedynka){
            najwiecej_jeden = jedynka;
            if(wart_indeks < tab[i]){
                wart_indeks = tab[i];
            }
        }
        jedynka = 0;
    }
    return wart_indeks;
}

/*
Napisz i wywołaj funkcję, która zlicza wystąpienie jednej sekwencji bitowej w drugiej (pomijając poprzedzające zera). 
Sekwencje podawane są jako liczby typu int. Sekwencje mogą się nakładać. W funkcji main() użytkownik BEZ poprzedzającego komunikatu wprowadza dwie liczby typu int.
Liczby te są podawane (zachowując kolejność podaną przez użytkownika) jako argumenty napisanej funkcji. 
Program ma wyświetlać TYLKO liczbę wystąpień jednej sekwencji bitowej w drugiej. Np. dla int a = 5 (101 bez wiodących zer) oraz int b = 0xA8E9D2AC (czyli dziesiętnie -1461071188) na ekran należy wypisać 7. 
Użycie tablic do realizacji tego zadania jest zabronione.
*/

int znajdzSekwencje(int a, int b){
   int count = 0;
    int aLen = 0;
    
    while (a > 0) {
        if (a & 1) {
            aLen++;
        }
        a >>= 1;
    }
    
    int bLen = 0;
    int mask = (1 << aLen) - 1;
    
    
    while (b > 0) {
        if ((b & mask) == a) {
            
            count++;
        }
        bLen++;
        b >>= 1;
    }
    
    
    int overlap = aLen - 1;
    while (overlap > 0) {
        if ((b & mask) == (a << overlap)) {
            count++;
        }
        overlap--;
    }
    
    return count;
}

int main(){
    int zad;
    cin >> zad;
    switch (zad)
    {
    case 1:{
        const int rozm_tab = 4;
        int tab[rozm_tab];
        int wariancja = 0;

        for(int i = 0; i < rozm_tab; i++){
            cin >> tab[i];
        }
        double srednia = sredWarian(rozm_tab, tab, wariancja);
        cout << srednia << " " << wariancja;

    }
        break;
    case 2:{
        const int rozm_tab = 10;
        int tab[rozm_tab];

        for(int i = 0; i < rozm_tab; i++){
            cin >> tab[i];
        }
        cout << liczJeden(tab, rozm_tab);
        }
        break;
    case 3:{
        int pierwsza = 0; 
        int druga = 0;
        cin >> pierwsza;
        cin >> druga;
        cout << znajdzSekwencje(pierwsza, druga);
    }        
        break;
    
    default:
        break;
    }
}