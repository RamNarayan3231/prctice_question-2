#include<iostream>
using namespace std;
int main() {
	int n1,n2;
	cin >> n1 >> n2;
	while(n1<=n2){
        int sum=0;
        int temp=n1;
		while(temp!=0){
			int r=temp%10;
			sum=sum+r*r*r;
			temp=temp/10;
		}
		if(sum==n1){
			cout <<sum<<endl;
		}
		n1=n1+1;
	}
	return 0;
}