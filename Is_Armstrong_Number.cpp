#include<iostream>
#include <cmath>
using namespace std;
int main() {
	int n1,n=0;
	cin >> n1;
	int l=n1;
    while(l!=0){
        n=n+1;
        l=l/10;
    }
    int sum=0;
    int temp=n1;
	while(temp!=0){
		int r=temp%10;
		sum=sum+1*pow(r,n);
		temp=temp/10;
	}
	if(sum==n1){
		cout <<"true"<<endl;
	}
    else{
        cout<< "false"<<endl;
    }
		
	
	return 0;
}