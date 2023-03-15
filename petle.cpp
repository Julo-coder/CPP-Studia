#include <iostream>
using namespace std;

int main(){
    int userIn;
    cin >> userIn;
    switch (userIn)
    {
    case 1:{
        cout << "zad 1"<< endl;
        const int arrSize = 11;
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
        const int arrS = 11;
        double minNumArr[arrS];
        double minNum;

        for(int i = 0; i < arrS; i++){
            cin >> minNumArr[i];
            minNum = minNumArr[0];
            if(minNumArr[i] < minNum){
                minNum = minNumArr[i];
            }else if(minNumArr[i] == minNumArr[i+1]){
                cout << "Not existing.";
            }
        }
        cout << minNum;
    }
    break;
    default:
        cout << "Wrong task number.";
        break;
    }
    return 0;
}