#include<bits/stdc++.h>
using namespace std;


int main(){
 int n = 9;
 int arr[n] = {1,2,3,4,5,6,7,8,9};
 int k = 3;
 string str = "right";  
 int tempArr[k];

  for (int i = 0; i < k; i++){
    if(str == "right"){
      tempArr[i] = arr[n-k+i];
    }else{
      tempArr[i] = arr[i];
    }
    cout << tempArr[i] << " ";
  }
  cout << endl;
  int flag;
  if(str == "right"){
    flag = n-k;
  }else{
    flag = k;
  }
cout << flag << "flag" << endl;
  for(int i=0; i<n; i++){
    if(str == "left"){
      arr[i] = arr[i+k];
      if(i >= n-k){
        arr[i] = tempArr[i -(n-k)];
      } 
    }else if(str == "right"){
      arr[i+k] = arr[i];
      if(i < k){
        arr[i] = tempArr[i];
      }
    }

    
    cout << arr[i] << " ";
  }


}