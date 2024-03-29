#include <iostream>
using namespace std;
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
    for(unsigned int mask = 0x80000000; mask; mask >>= 1){
        if (userIn & mask) {
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
    unsigned int userIn = 0;
    cin >> userIn;
    int count = 0;
    int mask = 1;
    bool foundLeftOne = false;

    while (userIn != 0) {
        if ((userIn & mask) != 0) {
            if (!foundLeftOne) {
                foundLeftOne = true;
            } else {
                break;
            }
        } else if (foundLeftOne) {
            count++;
        }
        userIn >>= 1;
    }
    cout << count;

}

void exThree(){
    unsigned int number;
    cin >> number;
    bool ispal=true;
    unsigned int mask1 = 0x80000000;
    unsigned int mask2 = 0x00000001;

            

    for(int i=0; i<32; ++i){
        int mask_y=number bitand mask1;
        int mask_z=number bitand mask2;
        if(mask_y=mask_z){
            continue;
        }else{
            ispal=false;
        }
        mask1>>=1;
        mask2<<=1;
    }
    cout << ispal;

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
        exThree();
        break;
    default:
        cout << "Wrong task number.";
        break;
    }
}