#include<bits/stdc++.h>
using namespace std;

void reverse_number(int num){
    int temp = num; int rev=0;
    while(temp !=0){
        int digit = temp%10;
        rev = rev * 10 + digit;
        temp = temp / 10;
        
    }
    cout << "Reverse of the number " << num <<" is " << rev;
}


int main(){
    int num;
    cin >> num;
    reverse_number(num);
    // count_number_digits(num);
    return 0;
}