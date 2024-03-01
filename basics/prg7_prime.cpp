#include<bits/stdc++.h>
using namespace std;

void check_prime(int num){
    int flag = 0;
    for(int i=1; i<= num; i++){
        if(num%i == 0) flag +=1;
    }
    if (flag ==2 ){
        cout << "Number "<< num <<" is prime";
    }else{
        cout << "Number "<< num <<" is not prime";
    }
}


int main(){
    int num;
    cin >> num;
    // cout << sqrt(num);
    check_prime(num);
    return 0;
}