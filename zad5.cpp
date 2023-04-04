#include<iostream>

using namespace std;

int main(){
    int x;
    cin >> x;

    switch (x)
    {
        case 1: {
            int x;

            cin >> x;

            unsigned int mask = 0x80000000;

            bool first = false;

            for(int i=0; i<32; ++i){

                int mask_y = mask bitand x;

                if(mask_y){
                    first = true;
                    cout << '1';
                }
                else if(first and (not mask_y)){
                    cout << '0';
                }
                mask= mask >> 1;
            }
            break;
        }
        case 2:{
            int x;
            int l1=0, l2=0;

            cin >> x;
            unsigned int mask = 0x80000000;
            bool s1=false;

            for(int i=0; i<32;i++){
                int mask_y= mask bitand x;
                if(mask_y){
                    s1=true;
                }
                if(s1 and mask_y){
                    l2=l2+l1;
                    l1=0;
                }
                if(s1 and (not mask_y)){
                    l1++;
                }
                
                mask>>=1;

            }
            cout << l1;
            break;
        }
        case 3:{
            int x;

            cin >> x;
            bool ispal=true;
            unsigned int mask1 = 0x80000000;
            unsigned int mask2 = 0x00000001;

            

            for(int i=0; i<32; ++i){
                int mask_y=x bitand mask1;
                int mask_z=x bitand mask2;
                if(mask_y=mask_z)
                {
                    continue;
                }
                else{
                    ispal=false;
                }
                mask1>>=1;
                mask2<<=1;
            }
            cout << ispal;
            break;
        }
        default:
            break;
    }

    return 0;
}