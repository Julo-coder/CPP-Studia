#include <iostream>
using namespace std;


void exOne(){
    /*
    Wprowadzanie liczb z danego zakresu: użytkownik wprowadza do 6-elementowej tablicy typu double liczby z przedziału <0, 10>. Użytkownik wprowadza kolejne liczby. 
    Jeżeli podana liczba mieści się w zadanym przedziale to jest zapisywana do tablicy. 
    Jeżeli podana liczba nie mieści się w przedziale, to program czeka na ponowne podanie liczby aż do momentu podania prawidłowej liczby. Wynikiem działania 
    programu jest wyświetlenie wprowadzonej tablicy w formacie "Resulting array: x0 x1 x2 x3 x4 x5",  gdzie symbole x0-x5 oznaczają kolejne elementy tablicy.
    */ 
    const int size = 6;
    double arr[size];
    int count = 0;

    while(count < size){
        double userIn;
        cin >> userIn;
        if(userIn >=0 && userIn <= 10){
            arr[count] = userIn;
            count++;
        }
    }

    for(int k = 0; k < size; k++){
        cout << arr[k] << " ";
    }
}

void exTwo(){
    /*
    Porównywanie tablic: należy sprawdzić czy dwie 5-elementowe tablice typu int wprowadzone przez użytkownika zwierają identyczne wartości. 
    Elementy w tablicach nie muszą być ustawione w tej samej kolejności oraz mogą się powtarzać. 
    Użytkownik w pierwszym kroku wprowadza wszystkie elementy pierwszej tablicy, a następnie wszystkie elementy drugiej tablicy. 
    Jeżeli użytkownik wprowadził błędne znaki zamiast liczb, to program czeka na ponowne podanie liczby aż do momentu podania prawidłowej liczby. 
    W przypadku podania przez użytkownika liczby zmiennoprzecinkowej, podaną liczbę należy rzutować na liczbę całkowitą. 
    Program ma wyświetlić "Equal." w przypadku, gdy tablice zawierają te same elementy lub "Different." w przypadku, gdy zwierają różne elementy.
    W zadaniu nie wolno korzystać z funkcji typu cin.good(), cin.fail(), itp. 
    Program powinien być napisany z wykorzystaniem dotychczas poznanych elementów języka C++. 
    Dopuszczalne jest wykorzystanie funkcji zamieniającej tekst na wartość rzeczywistą lub całkowitą.
     || int(userIn) != userIn
    */

    const int sizeArr = 5;
    int arr1[sizeArr];
    int count = 0;

    while(count < sizeArr){
        string userIn;
        cin >> userIn;
    }
}

void exThree(){

}

int main(){
    int task;
    cin >> task;
    switch (task)
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
    return 0;
}

