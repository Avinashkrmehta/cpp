// Print from n to 1 using backtrack
#include<bits/stdc++.h>
using namespace std;

int rec_sum(int i,int num, int res){
    if(i >num){
         return res;
    }
    res +=i;
    rec_sum(i+1,num,res);
}

int main(){
    int num;
    cin >> num;
    int res = 0;
    cout << "Sum of number is "<<rec_sum(1,num,res);
    return 0;
}