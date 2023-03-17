#include <iostream>
using namespace std;

int main(){
    int userIn;
    cin >> userIn;
    switch (userIn)
    {
    case 1:{
        const int size = 10;
        int arr[size];
        int maxVal = 0;
        int count = 0;

        for(int i = 0; i < size; i++){
            cin >> arr[i];
            if(arr[i] > maxVal){
                maxVal = arr[i];
            }
            
        }

         for(int i = 0; i < size; i++){
            if(arr[i] == maxVal){
                count++;
            }
            
        }
        cout << maxVal << " " << count;
    }
        
        break;
    // case 2:{

    // }
    //     break;
    case 3:{
        cout << "zad 3" << endl;
        const int arrS = 10;
        double minNumArr[arrS];
        double smaller = 0;
        double secSmaller = 0;

        for(int i = 0; i < arrS; i++){
            cin >> minNumArr[i];
            smaller = minNumArr[0];
            secSmaller = minNumArr[0];
            if(smaller > minNumArr[i]){
                smaller = minNumArr[i];
            }else if(secSmaller > minNumArr[i]){
                if(minNumArr[i] != smaller){
                    secSmaller = minNumArr[i];
                }
            }
            

        }
        cout << secSmaller;
    }
    break;
    default:
        cout << "Wrong task number.";
        break;
    }
    return 0;
}
