#include <iostream>
using namespace std;
int main(){
    string text;
    cin >> text;
    string rev;
    for(int i = 0; i < text.size(); i++){\
        rev = text[i] + rev;
    }
    cout << rev;
}