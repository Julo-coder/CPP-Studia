#include <iostream>
using namespace std;



int main(){
    int user_ch;
    cin >> user_ch;
    if(user_ch == 1){
        float a, b, c, d, e;
        cin >> a >> b >> c >> d;
        e = (a+b+c+d)/4;
        cout << e;
    }else if(user_ch == 2){
        int a, b;
        cin >> a >> b;
        
        if (a < 0 || b < 0){
            cout << "NaN";
        }else{
            int field = (a * b) /2;
            cout << field;
        }
    }else if(user_ch == 3){
        int calc_op;
        int n1, n2;
        cin >> calc_op >> n1 >> n2;
        if(calc_op == 1){
            int result = n1 + n2;
            cout << result;
        }
        else if(calc_op == 2){
            int result = n1 - n2;
            cout << result;
        }
        else if(calc_op == 3){
            int result = n1 * n2;
            cout << result;
        }
        else if(calc_op == 4){
            if(n1 == 0 || n2 == 0){
                cout << "NaN";
            }else{
                int result = n1 / n2;
                cout << result;
            }
        }
        else if(calc_op == 5){
            if(n1 == 0 || n2 == 0){
                cout << "NaN";
            }else{
                int result = n1 % n2;
                cout << result;
            }
        }
    }else{
        cout << "Wrong task number.";
    }
}
