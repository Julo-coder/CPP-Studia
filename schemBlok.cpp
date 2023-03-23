#include <iostream>
using namespace std;

/*
Wprowadzanie liczb z danego zakresu: użytkownik wprowadza do 6-elementowej tablicy typu double liczby z przedziału <0, 10>. Użytkownik wprowadza kolejne liczby. 
Jeżeli podana liczba mieści się w zadanym przedziale to jest zapisywana do tablicy. 
Jeżeli podana liczba nie mieści się w przedziale, to program czeka na ponowne podanie liczby aż do momentu podania prawidłowej liczby. Wynikiem działania 
programu jest wyświetlenie wprowadzonej tablicy w formacie "Resulting array: x0 x1 x2 x3 x4 x5",  gdzie symbole x0-x5 oznaczają kolejne elementy tablicy.
*/

int main(){
    const int size = 6;
    double arr[size];
    int count = 0;

    while(count < size){
        double userIn;
        cin >> userIn;
        if(userIn >=0 && userIn <= 10){
            arr[count] = userIn;
            count++;
        }else{
            
        }
    }

    for(int k = 0; k < size; k++){
        cout << arr[k] << " ";
    }
}
