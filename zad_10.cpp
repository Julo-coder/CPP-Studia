#include <iostream>
using namespace std;

/*
Napisz funkcję, która w sposób rekurencyjny wyznacza i zwraca iloczyn elementów tablicy. 
Funkcja przyjmuje jako argumenty tablicę typu double oraz jej rozmiar. W funkcji main() proszę zdefiniować rozmiar tablicy równy 6 oraz zadeklarować  tablicę, 
której elementy są wprowadzane przez użytkownika BEZ poprzedzającego komunikatu. W funkcji main() program wyświetla TYLKO wynik działania funkcji czyli iloczyn elementów tablicy. 
UWAGA: funkcja ta nie powinna zmieniać zawartości tablicy!

Napisz funkcję, która rekurencyjnie wyznacza n-ty wyraz ciągu wyrażonego poniższym wzorem:
an = 1 dla n = 1

an = 0.5 dla n = 2

an = -2 · an-1 dla n > 2

Funkcja przyjmuje jako argument zmienną typu int określającą, który wyraz ciągu obliczamy oraz zwraca wyznaczony wyraz ciągu. 
W funkcji main() argument wejściowy funkcji jest wprowadzany przez użytkownika BEZ poprzedzającego komunikatu. Program w funkcji main() wyświetla TYLKO obliczony wyraz ciągu.

Napisz funkcję, wyznaczającą silnię liczby typu unsigned int podaną jako argument funkcji. 
Zastosuj implementację rekurencyjną oraz argument domyślny równy 5. W funkcji main() użytkownik wprowadza liczbę, której silnię chce obliczyć. 
Jeśli użytkownik zamiast liczby wprowadzi inny znak lub znaki to należy zastosować argument domyślny. Program w funkcji main() wyświetla TYLKO wynik obliczenia.

Napisz funkcję, wyznaczającą silnię liczby typu unsigned int podaną jako argument funkcji. 
Zastosuj implementację iteracyjną oraz argument domyślny równy 3. W funkcji main() użytkownik wprowadza liczbę, której silnię chce obliczyć. 
Jeśli użytkownik zamiast liczby wprowadzi inny znak lub znaki to należy zastosować argument domyślny. Program w funkcji main() wyświetla TYLKO wynik obliczenia.
*/

double iloczTab(double tab[], int rozm){
    if (rozm == 0) {
        return 1.0;
    } else {
        return tab[0] * iloczTab(tab + 1, rozm - 1);
    }
    
}

double ciag(int n){
    if(n == 1) {
        return 1;
    }else if(n == 2){
        return 0.5;
    }else {
        return -2 * ciag(n - 1);
    }
}

int silniaRek(unsigned int n = 5){
    if(n == 1){
        return 1;
    }else{
        return n * silniaRek(n - 1);
    }
}

int silniaIter(unsigned int m = 3){
    int silnia = 1;
    for (unsigned int i = 2; i <= m; ++i) {
        silnia *= i;
    }
    return silnia;
}

int main(){
    int zadanie;
    cin >> zadanie;
    switch (zadanie)
    {
    case 1:{
        const int rozm_tab = 6;
        double tab[rozm_tab];

        for(int i = 0; i < rozm_tab; i++){
            cin >> tab[i];
        }

        cout << iloczTab(tab, rozm_tab);

    }
        break;
    case 2:{
        int n;
        cin >> n;
        cout << ciag(n);
    }
        break;
    case 3:{
        unsigned int liczba;
        cin >> liczba;
        cout << silniaRek(liczba);
    }
        break;
    case 4:{
        unsigned int l;
        cin >> l;
        cout << silniaIter(l);
    }
        break;
    
    default:
        break;
    }
    return 0;
}