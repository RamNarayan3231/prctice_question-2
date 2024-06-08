#include <iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    int n;
    int sum1; //odd sum
    int sum2;//even sum
    int i = 1;
    while(i<=N){
        int sum1=0; //odd sum
        int sum2=0;
        cin>>n; //12345
        while (n!=0){
            int r = n%10 ;// r = 5
            if(r %2 == 0){
                sum2 = sum2+ r; // sum2 = 6
            }
            else{
            sum1 = sum1 +r;// sum1 = 9
            }
            n = n/10;
        }
        i++;
        if (sum1 % 3 == 0 || sum2 % 4 == 0){
             cout<<"Yes"<<endl;
            // ans = "Yes";
        }
        else{
            cout<<"No"<<endl;
            // ans = "No";

        }
    }

    
    return 0;
}