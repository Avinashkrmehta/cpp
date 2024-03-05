// Print from 1 to n using backtrack
#include<bits/stdc++.h>
using namespace std;

void rec_fun(int i,int num){
    if( i < 1){
        return;
    }
    rec_fun(i-1, num);
    cout<< i << endl;;
    
}

int main(){
    int num;
    cin >> num;
    rec_fun(num,num);
    return 0;
}