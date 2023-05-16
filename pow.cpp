#include <iostream>
using namespace std;

/*
Napisz program, który wykonuje operacje na tablicy dwuwymiarowej o 4 wierszach i 5 kolumnach typu int. 
Program, dla każdego elementu tablicy wyznacza i wyświetla sumę elementów go otaczających. Np. dla elementu tab[0][0], 
funkcja wykona operację tab[0][1] + tab[1][0] + tab[1][1] i wyświetli wynik tej operacji, 
dla elementu tab[2][2] operacje tab[1][1] + tab[1][2] + tab[1][3] + tab[2][1] + tab[2][3] + tab[3][1] + tab[3][2] + tab[3][3]. 
Wyniki poszczególnych sum są oddzielone od siebie spacją. Zadanie należy wykonać wykorzystując pętle for oraz jak najmniejszą liczbę instrukcji warunkowych.
W funkcji main() użytkownik tworzy tablicę dwuwymiarową i wypełnia ją wierszami BEZ poprzedzającego komunikatu.

Napisz program, który realizuje test na palindrom. Program ignoruje spację, a wielkość liter nie ma znaczenia. 
Np. dla argumentu wejściowego "Ikar łapał raki" program określa, że palindrom został znaleziony. 
W funkcji main() użytkownik wprowadza zmienną typu string używając funkcji getline (pozwala to wprowadzić tekst wraz ze spacjami), 
a następnie wykonuje kod odpowiedzialny za sprawdzenie czy podany tekst jest palindromem:
cin.ignore();
string text;
getline(cin, text);
Program wyświetla TYLKO "1", gdy tekst jest palindromem i "0", gdy nim nie jest.

Napisz program, który realizuje przesunięcie cykliczne. 
Cykliczne przesunięcie polega na wstawieniu bitów, które znikają w wyniku zwykłego przesunięcia na początek sekwencji. 
Np. dla zwykłego przesunięcia int a = 5 o 3 bity w prawo otrzymamy 0000 0000 0000 0000 0000 0000 0000 0000, 
natomiast dla przesunięcia cyklicznego otrzymamy 1010 0000 0000 0000 0000 0000 0000 0000. 
Program przyjmuje jako dane wejściowe dwie zmienne typu int, pierwsza z nich jest liczbą, 
na której dokonywane jest przesunięcie, druga natomiast oznacza, o ile ta liczba ma być przesunięta.
Funkcja zwraca przesuniętą cyklicznie wartość. W funkcji main użytkownik wprowadza liczbę oraz wskazanie, 
o ile ma zostać ona przesunięta, a następnie wykonuje opisaną funkcjonalność i wyświetla TYLKO wynik w formacie dziesiętnym.
*/

void exOne(){
    /*
    Napisz program, który wykonuje operacje na tablicy dwuwymiarowej o 4 wierszach i 5 kolumnach typu int. 
    Program, dla każdego elementu tablicy wyznacza i wyświetla sumę elementów go otaczających. Np. dla elementu tab[0][0], 
    funkcja wykona operację tab[0][1] + tab[1][0] + tab[1][1] i wyświetli wynik tej operacji, 
    dla elementu tab[2][2] operacje tab[1][1] + tab[1][2] + tab[1][3] + tab[2][1] + tab[2][3] + tab[3][1] + tab[3][2] + tab[3][3]. 
    Wyniki poszczególnych sum są oddzielone od siebie spacją. Zadanie należy wykonać wykorzystując pętle for oraz jak najmniejszą liczbę instrukcji warunkowych.
    W funkcji main() użytkownik tworzy tablicę dwuwymiarową i wypełnia ją wierszami BEZ poprzedzającego komunikatu.
    */
    // int col = 5, row = 4;
    // float tab[row][col];

    // for(int i = 0; i < row; i++){
    //     for(int j = 0; j < col; j++){
    //         cin >> tab[i][j];
    //     }
    // }

    // for(int i = 0; i < row; i++){
    //     for(int j = 0; j < col; j++){
    //         int sum = 0;
    //         for(int x = i-1; x <= i+1; x++){
    //             for(int y = j-1; y <=j+1; y++){
    //                 if (x >= 0 && y >= 0 && x < 4 && y < 5 && !(x == i && y == j)) {
    //                             sum += tab[x][y];
    //                         }
    //             }
    //         }
    //     }
    // }

    int liczba;
    cin >> liczba;
    int tab[4][5];
            for(int i=0; i<4; i++){
                for(int j=0; j<5; j++){
                    cin >> liczba;
                    liczba = static_cast<int>(liczba);
                    tab[i][j] = liczba;
                }
            }
            for (int i = 0; i < 4; i++) {
                for (int j = 0; j < 5; j++) {
                    int sum = 0;
                    for (int x = i-1; x <= i+1; x++) {
                        for (int y = j-1; y <= j+1; y++) {
                            if (x >= 0 && y >= 0 && x < 4 && y < 5 && !(x == i && y == j)) {
                                sum += tab[x][y];
                            }
                        }
                    }
                    cout << sum << " ";
                }
            }
    

    // for(int i = 0; i < row; i++){
    //     for(int j = 0; j < col; j++){
    //         cout << tab[i][j] << " ";
    //     }
    // }
}
void exTwo(){
    /*
    Napisz program, który realizuje test na palindrom. Program ignoruje spację, a wielkość liter nie ma znaczenia. 
    Np. dla argumentu wejściowego "Ikar łapał raki" program określa, że palindrom został znaleziony. 
    W funkcji main() użytkownik wprowadza zmienną typu string używając funkcji getline (pozwala to wprowadzić tekst wraz ze spacjami), 
    a następnie wykonuje kod odpowiedzialny za sprawdzenie czy podany tekst jest palindromem:
    cin.ignore();
    string text;
    getline(cin, text);
    Program wyświetla TYLKO "1", gdy tekst jest palindromem i "0", gdy nim nie jest.
    */

    cin.ignore();
    string text;
    getline(cin, text);

    bool palindrom = true;
    
    for(int i = 0; i < text.size(); i++){

    }


}




void exThree(){
    string arr[3];

    for(int i = 0; i < 3; i++){
        cin >> arr[i];
    }

    for(int j = 0; j < 3; j++){
        cout << arr[j] << " ";
    }
}


int main(){
    int userIn;
    cin >> userIn;

    switch (userIn)
    {
    case 1:
        exOne();
        break;
    case 2:
        exTwo();
        break;
    case 3:
        exThree();
        break;
    default:
        break;
    }
}