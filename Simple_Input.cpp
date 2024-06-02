#include<iostream>
using namespace std;
int main() {
	int no;
	cin >> no;
	int sum=0;
	sum = sum + no;
	while(sum>=0){
		cout << no << endl;
		cin >> no;
		sum=sum+no;
	}
	return 0;
}