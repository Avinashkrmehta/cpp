#include<bits/stdc++.h>
using namespace std;

int main(){
    pair <int, int> p = {1,3};
    cout << p.first << " " << p.second << endl;
    pair<int, pair<int,int>> pp = {1, {1,2}};
    cout << pp.first << " " << pp.second.second << " ";
    return 0;
}