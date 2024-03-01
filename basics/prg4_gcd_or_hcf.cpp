#include<bits/stdc++.h>
using namespace std;

void gcd_or_hcf(int num1, int num2){
    int result;
    for(int i=1; i<=num1; i++){
        if(num1%i == 0 && num2%i ==0) result = i;
    }
    cout << "GCD of the number "<< num1 << " and " << num2 << " is " << result;
}


int main(){
    int num1,num2;
    cin >> num1 >> num2;
    cout << num1%num2;
    gcd_or_hcf(num1,num2);
    return 0;
}