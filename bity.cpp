#include <iostream>
using namespace std;
unsigned int MASK = 0x80000000;
void exOne(){
    /*
    Wyświetlanie liczby w reprezentacji binarnej bez wiodących zer:  
    w funkcji main() proszę zadeklarować zmienną typu int, która jest następnie wprowadzana przez użytkownika BEZ poprzedzającego komunikatu. 
    W funkcji main() program wyświetla TYLKO wynik działania funkcji.
    Np. dla argumentu wejściowego 5 program wyświetli 101. W zadaniu NIE można korzystać z tablicy. Należy użyć co najmniej dwóch operatorów bitowych.
    */
    unsigned int userIn;
    cin >> userIn;
    bool isOne = true;
    for(MASK; MASK; MASK >>= 1){
        if (userIn & MASK) {
            isOne = false;
            cout << "1";
        } else if(!isOne){
            cout << "0";
        }
    }
    if (isOne) {
        cout << "0";
    }
}


void exTwo(){
    /*
    Zliczanie liczby zer pomiędzy dwoma skrajnymi jedynkami, tj. skrajną jedynką z lewej strony i skrajną jedynkę z prawej strony: 
    w funkcji main() proszę zadeklarować zmienną typu int, która jest następnie wprowadzana przez użytkownika 
    BEZ poprzedzającego komunikatu. W funkcji main() program wyświetla TYLKO wynik działania programu, 
    np. dla argumentu wejściowego 10 program wyświetli 1. W zadaniu NIE można korzystać z tablicy. 
    Należy użyć co najmniej dwóch operatorów bitowych.
    */
    unsigned int userIn;
    cin >> userIn;
    bool isOne = true;
    int zeroCounter = 0;
    for(MASK; MASK; MASK >>=1){
        if (userIn & MASK) {
            isOne = false;
            cout << "First one";
        } else if(!isOne){
            zeroCounter++;
        }
    }

    cout << zeroCounter;
}

void exThree(){

}

int main(){
    int choice;
    cin >> choice;
    switch (choice)
    {
    case 1:
        exOne();
        break;
    case 2:
        exTwo();
        break;
    case 3:
        break;
    default:
        break;
    }
    exOne();
}