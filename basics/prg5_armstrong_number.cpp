#include<bits/stdc++.h>
using namespace std;

void armstrong(int num){
    cout << to_string(num).length();
    int temp = num;
    int result = 0;
    while(temp !=0){
        int x = temp%10;
        result += pow(x,to_string(num).length());
        cout << "X--->" << x;
        cout << "result -->" <<result;
        cout << endl;
        temp = temp / 10;
    }
    cout << result;
    if(result == num){
        cout << "Number " << num << " is plaindrome";
    }else{
        cout << "Number " << num << " is not plaindrome";
    }

}


int main(){
    int num;
    cin >> num;
    armstrong(num);
    return 0;
}