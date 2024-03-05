// Print from n to 1 using backtrack
#include<bits/stdc++.h>
using namespace std;

void plaindrome(string str){
    string res = str;
    for(int i=0; i< str.length();i++){
        res[str.length() -i-1] =str[i];
    }
    if(str == res){
        cout << "Plaindrome";
    }else{
        cout << "Not Plaindrome";
    }
}

int main(){
    string str;
    cin >> str;
    cout << str << endl;
    plaindrome(str);
    
    return 0;
}



