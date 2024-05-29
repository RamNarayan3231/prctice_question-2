#include <iostream>
using namespace std;
int main() {
    int no,sum=0;
    cin >> no;
    while(no!=0){
        int r=no%10;
        sum=10*sum+r;
        no=no/10;
    }
    cout << sum;
    return 0;
}
