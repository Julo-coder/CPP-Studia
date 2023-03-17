#include <iostream>
using namespace std;

int main() {
    const int size = 10;
    double arr[size];

    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    double small1 = arr[0];
    double small2 = arr[0];
    for(int i = 0; i < size; i++){
        if(arr[i] < small1){
            small2 = small1;
            small1 = arr[i];
        }else if(arr[i] < small2 && arr[i] != small1){
            small2 = arr[i];
        }
    }
    if(small1 == small2){
        cout  << "Not existing.";
    }else{
        cout << small2;
    }
    return 0;
}