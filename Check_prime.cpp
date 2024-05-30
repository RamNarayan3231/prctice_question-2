#include<iostream>
using namespace std;

int main(){
    int no;
    cin >> no;

    if (no <= 1) {
        cout << "not prime";
        return 0;
    }

    int i = 2;
    while (i < no) {
        if (no % i == 0) {
            cout << "Not Prime";
            return 0;
        }
        i++;
    }
    
    cout << "Prime";
    return 0;
}