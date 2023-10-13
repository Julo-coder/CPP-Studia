#include <iostream>
using namespace std;

// int test(int i){
//     if(i < 1) return 1;
//     return i * test(i - 1);
// }

// int findSmall(int arr[]){
//     int small{arr[0]};
//     for(int i : arr){
//         if(i < small){
//             small = i;
//         }
//     }
//     return small;
// }

// void M(int n){
//     if(n > 0){
//         M(--n);
//         cout << n << " "; 
//     }

    
// }

int foo(int x, int y){
    if(x == 0) return 0;
    cout << foo(x/y, y) << endl;
    return 1 + foo(x/y, y);
}

int f (int i){
    return ++i;
}

int g (int &i){
    return ++i;
}

int h (int &i){
    return i++;
}

int main(){
    //int arr[] = {34, 15, 88, 2};
    // cout << test(4) << endl;
    // cout << findSmall(arr);
    // int a,b;
    // cin >> a;
    // cin >> b;
    // if(a >= b)cout << "Nie dobrze";
    // int arr[b];
    // for(int i = 0; i < b - 1; i++){
    //     arr[i] = a++;
    // }
    // int a = 5;
    // int b = 6;
    // int c = a bitand b;

    // a += 0x00000002;
    // cout << a << endl;
    // cout << c;
    
    // M(5);

    // int tab [] = {5, 011, 34, 6};
    // int suma = 0;
    // for (int i = 0; i < 4; i++){
    //     cout << tab[i] << endl;
    //     suma += tab[i];
    // }
    // cout << suma << endl;
    // int number = 1011;
    // cout << number;

    // int result = foo(25,4);
    // cout << result;


    // for (int i = 0, result = 0, a = 2; i < 5; i++){
    //     for (int j = 30; j > 0; j >>= 1){
    //         result = ++a;
    //     }
        
    //     cout << result << endl;
    // }

    // int n = 1;
    // int val = 9;

    // bool result = (n > 0) ? (val & -val) == val : false;
    // cout << result;

    // int z = 0, i = 32;

    // while (i)
    // {
    //     z|=i;
    //     i>>=2;
    // }
    
    // cout << z;

    int a = 0, b = 0, c = 0;
    a += f(g(a));
    b += f(f(a));
    c += f(h(c));

    cout << a << " " << b << " " << c << " ";
}