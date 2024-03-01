#include<bits/stdc++.h>
using namespace std;

void divisors(int num){
    for(int i=1; i<= num; i++){
        if(num%i == 0) cout << i << " ";
    }
}


int main(){
    int num;
    cin >> num;
    cout << sqrt(num);
    // divisors(num);
    return 0;
}