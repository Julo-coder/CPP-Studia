#include <iostream>
using namespace std;

int main() {
    const int size = 10;
    double arr[size];
    double small = 0;
    double smaller = 0;

    for(int i = 0; i < size; i++){
        cin >> arr[i];
        small = arr[0];
        smaller = arr[0];
    }

    for(int z = 0; z < size; z++){
        if(arr[z] < small){
            smaller = small;
            small = arr[z];
        }
        if(arr[z] < smaller && arr[z] != small){
            smaller = arr[z];
        }
    }
    if (small == smaller){
    cout << "Not existing.";
    }else{
        cout << smaller;
    }
    return 0;
}