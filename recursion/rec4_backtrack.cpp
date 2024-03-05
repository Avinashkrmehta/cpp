// Print from n to 1 using backtrack
#include<bits/stdc++.h>
using namespace std;

void rec_fun(int i,int num){
    if( i > num){
        return;
    }
    rec_fun(i+1, num);
    cout<< i << endl;;
    
}

int main(){
    int num;
    cin >> num;
    rec_fun(1,num);
    return 0;
}