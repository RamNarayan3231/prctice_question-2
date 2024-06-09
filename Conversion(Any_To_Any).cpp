#include <iostream>
#include<math.h>
using namespace std;
int any1_to_decimal_to_any2(int any1,int any2,long long int sn){
    //any1 to decimal...............................................
    int j = 0 ;
    long long int sum = 0 ;
    while(sn != 0) {
        int ld = sn % 10 ;
        sum = sum + ld * pow(any1 , j) ;
        j++ ;
        sn = sn / 10 ;
    }
    //decimal to any2------------------------------------------------
    long long int sum2 = 0 ;
    int i=0;
    while(sum != 0){
        long long int r = sum % any2 ;
        sum2 = sum2 + r * pow (10 , i);
        sum = sum / any2 ;
        i++;
    }
    return sum2;

}
int main() {
        int any1 ;
        cin >> any1 ;
        int any2 ;
        cin >> any2 ;
        int sn ;
        cin >> sn ;  // source number 
        cout << any1_to_decimal_to_any2( any1, any2, sn);
        return 0;
}
