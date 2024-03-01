#include<bits/stdc++.h>
using namespace std;

void rec_fun(int i,int num){
    if(i > num){
        return;
    }
    cout<< "Avinash" << endl;;
    rec_fun(i+1, num);
}

int main(){
    int num;
    cin >> num;
    rec_fun(1,num);
    return 0;
}