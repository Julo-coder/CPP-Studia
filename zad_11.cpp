#include <iostream>
using namespace std;

void sortowankoZad1(char wejTab[], int wejRozm){
    int k;
    for(int i = 0; i < wejRozm - 1; i++){
        k = i;
        for(int j = i + 1; j < wejRozm; j++){
            if(wejTab[k] > wejTab[j]){
                k = j;
            }
        }
        if(k != i){
            swap(wejTab[i], wejTab[k]);
        }
    }
    
    for(int h = 0; h < wejRozm; h++){
        cout << wejTab[h] << " ";
    }
}
/*
Napisz funkcję, która przyjmuje jako argumenty wejściowe dwuwymiarową tablicę typu int oraz jej rozmiary. 
Zadaniem funkcji jest posortowanie rosnąco tablicy będącej argumentem wejściowym funkcji. W funkcji main() proszę zdefiniować liczbę wierszy oraz kolumn tablicy odpowiednio jako 4 i 5 
oraz stworzyć tablicę, której elementy są wprowadzane przez użytkownika BEZ poprzedzającego komunikatu. Zapełniane są wszystkie miejsca w tablicy. 
Tablicę wypełniamy wierszami tj. dopiero po wypełnieniu wszystkich miejsc w pierwszym wierszu przechodzimy do wypełnienia kolejnego wiersza. 
W funkcji main() program wyświetla TYLKO wynik działania funkcji czyli posortowaną tablicę dwuwymiarową, której elementy są oddzielone spacją. 
Tablica ma być wyświetlana wierszami. Uwaga: przepisywanie tablicy dwuwymiarowej do tablicy jednowymiarowej jest zabronione.
*/
void sortowanieKwadTab(int wejKolumn, int wejWiersz, int tablica[][5]){
    int nowaKol, nowyWier;
    for(int kol = 0; kol < wejKolumn - 1; kol++){
        nowaKol = kol;
        for(int wier = 0; wier < wejWiersz ; wier++){
            nowyWier = wier;
            for(int nkol = nowaKol + 1; nkol < wejKolumn; nkol++){
                for(int nwier = nowyWier + 1; nwier < wejWiersz; nwier++){
                    if(tablica[nkol][nwier] < tablica[nowaKol][nowyWier]){
                        nowaKol = nkol;
                        nowyWier = nwier;
                    }
                }
            }
            if(nowaKol != kol && nowyWier != wier){
                swap(tablica[kol][wier], tablica[nowaKol][nowyWier]);
            }
            
        }
    }
}
/*
Napisz funkcję, która przyjmuje jako argumenty wejściowe jednowymiarową tablicę typu int oraz jej rozmiar. 
Zadaniem funkcji jest posortowanie malejąco tablicy metodą sortowania koktajlowego. 
Dodatkowo należy napisać funkcję, która przyjmuje jako argument jednowymiarową tablicę typu int oraz jej rozmiar. 
Funkcja ta wyświetla elementy tablicy oddzielone spacją. Funkcja wyświetlająca tablicę jest wywoływana w funkcji sortującej w każdej iteracji pętli zewnętrznej na końcu jej działania. 
W funkcji main() proszę zdefiniować rozmiar tablicy równy 10 oraz stworzyć tablicę, której elementy są wprowadzane przez użytkownika BEZ poprzedzającego komunikatu. 
Po wprowadzeniu elementów do tablicy, tablica jest sortowana przy użyciu wyżej opisanych funkcji.
*/


int main(){
    int zad;
    cin >> zad;
    switch(zad){
        case 1:{
            const int rozmiar = 30;
            char tab[rozmiar];
            
            for(int i = 0; i < rozmiar; i++){
                cin >> tab[i];
            }
            sortowankoZad1(tab, rozmiar);
        }
        break;
        case 2:{
            const int kolumna = 4;
            const int wiersz = 5;
            int tab[kolumna][wiersz];
            
            for(int i = 0; i < kolumna; i++){
                for(int j = 0; j < wiersz; j++){
                    cin >> tab[i][j];
                }
            }
            
            sortowanieKwadTab(kolumna, wiersz, tab);
            
            for(int w = 0; w < kolumna; w++){
                for(int k = 0; k < wiersz; k++){
                    cout << tab[w][k];
                }
            }
        }
        break;
        case 3:{
            
        }
        break;
        default:
        break;
    }
}