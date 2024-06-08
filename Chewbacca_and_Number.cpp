#include <iostream>
#include <cmath>
using namespace std;

long long int check(long long int a) {
    long long int sum = 0;
    int j = 0;
    while (a != 0) {
        long long int ld = a % 10;
        if (ld >= 5) {
            if(ld==9 && (a/10)==0){
                ld=9;
            }
            else{
                ld = 9 - ld;
            }
        }
        sum = sum + ld * pow(10, j);
        j++;
        a = a / 10;
    }
    return sum;
}

int main() {
    long long int no;
    cin >> no;
    cout <<check(no) << endl;
    return 0;
}
