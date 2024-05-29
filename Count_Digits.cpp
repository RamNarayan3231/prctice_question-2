#include<iostream>
using namespace std;
int main() {
	int no,ch,count=0;
	cin >> no;
	cin >> ch;

	int temp=no;
	while(temp!=0){
		int r=temp%10;
		if(r==ch){
			count=count+1;
		}
		temp=temp/10;
	}
	cout << count;
	return 0;
}