#include<iostream>
using namespace std;
int HCF(int a,int b){
	int i=1,n;
	while(i<=a||i<=b){
		if(a%i==0 && b%i==0){
			n=i;
		}
		i++;
	}
	return n;
}
int LCM(int a,int b){
	int t;
	t=(a*b)/HCF(a,b);
	return t;
}
int main() {
	int a,b;
	cin >> a >> b;
	cout << LCM(a,b);

	return 0;
}