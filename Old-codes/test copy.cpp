#include<bits/stdc++.h>
using namespace std;

    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0) return "";
        string prefix = strs[0];
        for(int i=1; i<strs.size(); i++) {
          cout << "prefix----->" << prefix << endl;
          cout << "strs[i].find(prefix)-->" << strs[i]<< endl;
          while(strs[i].find(prefix) != 0) {
              prefix = prefix.substr(0, prefix.length() - 1);
              cout << "prefix-----" << prefix << endl;
              if(prefix == "") return "";
          }
        }
        return prefix;
    }


int main(){
 
 vector<string> strs = {"flower","flow","flight"};

longestCommonPrefix(strs);
  // string smallStr = str[0];
  // for(int i=0; i <  str.size(); i++){
  //   if(str[i].length() < smallStr.length()){
  //     smallStr = str[i];
  //   }
  // }
  // string res = "";
  // for(int j=0; j<= smallStr.length(); j++){
  //   for(auto it:str){
  //     cout << "smallStr[j] " <<  smallStr[j] << endl;
  //     if(it.find(smallStr[j])){
  //       res += smallStr[j];
  //     }else{
  //       res = "";
  //       break;
  //     }
       
  //   }
  // }
  // // cout << "Smallest length string is" << smallStr;
  // cout << "common prefix " << res;
  return 0;
}