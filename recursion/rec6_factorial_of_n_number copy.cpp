// Print from n to 1 using backtrack
#include<bits/stdc++.h>
using namespace std;

int rec_fact(int num){
    if(num == 0){
        return 1;
    }
   return num * rec_fact(num-1);
}

int main(){
    int num;
    cin >> num;
    cout << "Factorial of number is "<<rec_fact(num);
    return 0;
}



