#include <iostream>
using namespace std;

int main(){
    int userIn;
    cin >> userIn;
    switch (userIn)
    {
    case 1:{
        cout << "zad 1"<< endl;
        const int arrSize = 10;
        int numArr[arrSize];
        int maxNum = 0;
        int repeat = 0;
        for(int i = 0; i < arrSize; i++){
            cin >> numArr[i];
            if(numArr[i] > maxNum){
                maxNum = numArr[i];
            }else if(maxNum == numArr[i]){
                repeat += 1;
            }
        }
        
        cout << maxNum << " " << repeat;
    }
        
        break;
    case 2:{

    }
        break;
    case 3:{
        cout << "zad 3" << endl;
        const int arrS = 10;
        double minNumArr[arrS];
        double smaller = 0;
        double secSmaller = 0;

        for(int i = 0; i < arrS; i++){
            cin >> minNumArr[i];
            smaller = minNumArr[i];
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