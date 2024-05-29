#include <iostream>
using namespace std;
int main() {
    int N1,N2,GCD=0;
    cin >> N1 >> N2;
    int i=2;
    while(i<N1 || i<N2){
        if(N1%i==0 && N2%i==0){
             GCD=i;
            
        }
        i++;
    }
    cout << GCD;
    return 0;
}
