#include<iostream>
using namespace std;
int main() {
	int i=1;
	int no;
	cin >> no;
	int sum1=0 ,sum2=0;
	
	while(no != 0){
		int ld = no%10;
		if(i%2==0){ //Even sum--------
			sum1 = sum1 + ld;
		}
		else{ //Odd sum--------------
			sum2 = sum2 + ld;
		}
		no=no/10;
		i++;
	}
	cout << sum2 << endl;
	cout << sum1 << endl;
	return 0;
}