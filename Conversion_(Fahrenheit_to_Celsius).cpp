#include<iostream>
using namespace std;
int main() {
	int F;
	cin >> F;
	int max_no;
	cin >> max_no;
	int steps;
	cin >> steps;
	while(F <= max_no){
		int c=(5.0/9)*(F-32);
		cout << F << "\t" << c << endl;
		F=F+steps;
	}
	return 0;
}