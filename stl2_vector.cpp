#include<bits/stdc++.h>
using namespace std;

int main(){
    vector <int> v;
    v.push_back(10);
    v.emplace_back(20);
    vector<int>::iterator it = v.begin();
    it++;
    cout << *(it) << " ";
    for(auto it:v){
        cout << it << " ";
    }
    return 0;
}