#include<bits/stdc++.h>
using namespace std;

void plaindrome(int num){
    int temp = num; int rev=0;
    while(temp !=0){
        int digit = temp%10;
        rev = rev * 10 + digit;
        temp = temp / 10;
        
    }
    if(num == rev){
        cout << num <<" is plaindrome";
    }else{
        cout << num << " is not plaindrome";
    }
}


int main(){
    int num;
    cin >> num;
    plaindrome(num);
    return 0;
}