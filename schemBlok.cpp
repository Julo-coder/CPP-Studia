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
    const int size = 5;
    int arr1[size], arr2[size];

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

    int key, j;
    for (int i = 1; i < size; i++) {
        key = arr1[i];
        j = i - 1;
        while (j >= 0 && arr1[j] > key) {
            arr1[j + 1] = arr1[j];
            j--;
        }
        arr1[j + 1] = key;
    }

    for (int i = 1; i < size; i++) {
        key = arr2[i];
        j = i - 1;
        while (j >= 0 && arr2[j] > key) {
            arr2[j + 1] = arr2[j];
            j--;
        }
        arr2[j + 1] = key;
    }


    bool equal = true;
    for (int i = 0; i <size ; ++i) {
        if (arr1[i] != arr2[i]) {
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

