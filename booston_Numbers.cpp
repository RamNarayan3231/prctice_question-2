#include <iostream>
using namespace std;
int main() {
    int no;
    cin >> no;
    int sum1=0,sum2=0;
    //factor sum------------------------------------------
    int temp1=no;
    int i=2;
    while(temp1){
        while(temp1%i==0){
            int p = i;
            if(p>=10){
                //int c = p ;
                int s = 0 ;
                while(p != 0){
                    int r = p % 10;
                    s = s + r ;
                    p = p / 10 ;
                }
                p = s ;
            }
            sum1 = sum1 + p;
            temp1 = temp1 / i;
            
        }
        if(temp1==1){
                break;
        }
        i++;
    }
    //digit sum--------------------------------------------
    int temp2=no;
    while(temp2!=0){
        int ld=temp2%10;
        sum2=sum2+ld;
        temp2=temp2/10;
    }
    if(sum1==sum2){
        cout << true <<endl;
    }
    else{
        cout << false << endl;
    }
    return 0;
}