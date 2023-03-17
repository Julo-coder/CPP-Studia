#include <iostream>
using namespace std;

int main(){
    int userIn;
    cin >> userIn;
    switch (userIn)
    {
    case 1:{
        const int arrSize = 10;
        int numArr[arrSize], maxNum;
        int repeat = 0;
        for(int i = 0; i < arrSize; i++){
            cin >> numArr[i];
            maxNum = numArr[0];
            if(numArr[i] > maxNum){
                maxNum = numArr[i];
            }else if(maxNum == numArr[i]){
                repeat += 1;
            }
        }
        
        cout << maxNum << " " << repeat;
    }
        
        break;
    default:
        cout << "Wrong task number.";
        break;
    }
    return 0;
}
