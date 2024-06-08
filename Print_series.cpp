#include <iostream>
using namespace std;
int main() {
    int n1,n2;
    cin >> n1 >> n2;
    int i=1;
    int n=1;
    for(; i <= n1;i++){
        int c= 3*n+2;
        if(c%n2 == 0){
            n1=n1+1;
            n=n+1;
            continue;
        }
        n++;
        cout << c << endl;
    }
    return 0;
}