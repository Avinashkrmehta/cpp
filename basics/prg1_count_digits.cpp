#include<bits/stdc++.h>
using namespace std;

// Proogram to write the count of number of digits in a number

void count_number_digits(int num){
    int temp = num; int count = 0;
    while(temp !=0){
        temp = temp / 10;
        count += 1;
    }
    cout << "Length of the number " << num <<" is " << count;
}


void count_number_digits1(int num){
 string str = to_string(num);
 int count = str.size();
    cout << "length of the digit is "<< count;
}


void count_number_digits2(int num){
    int count;
    count = floor(log10(num) + 1);
    cout << "Length of the number " << num <<" is " << count;
}



int main(){
    int num;
    cin >> num;
    count_number_digits2(num);
    // count_number_digits(num);
    return 0;
}