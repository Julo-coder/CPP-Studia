#include <iostream>
using namespace std;


void exOne(){
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
    int arr1[5], arr2[5];
    bool equal = true;

    for (int i = 0; i < 5; i++) {
        std::string input;
        std::cin >> input;

        bool valid = true;
        for (char c : input) {
            if (c < '0' || c > '9') {
                valid = false;
                break;
            }
        }

        if (valid) {
            arr1[i] = stoi(input);
        }
        else {
            i--; 
        }
    }

    for (int i = 0; i < 5; i++) {
        string input;
        cin >> input;

        bool valid = true;
        for (char c : input) {
            if (c < '0' || c > '9') {
                valid = false;
                break;
            }
        }
        if (valid) {
            arr2[i] = stoi(input);
        }
        else {
            i--;
        }
    }

    for (int i = 0; i < 5; i++) {
        bool found = false;
        for (int j = 0; j < 5; j++) {
            if (arr1[i] == arr2[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            equal = false;
            break;
        }
    }

    if (equal) {
        cout << "Equal." << endl;
    }
    else {
        cout << "Different." << endl;
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

