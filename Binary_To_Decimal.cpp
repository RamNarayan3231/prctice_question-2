#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int bno;
    cin >> bno;
    int sum=0;
    int i=0;
    while(bno!=0){
        int r=bno%10;
        sum=sum+r*pow(2,i);
        i++;
        bno=bno/10;
    }
    cout << sum;
    return 0;
}
