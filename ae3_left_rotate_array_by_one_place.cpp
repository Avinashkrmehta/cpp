#include<bits/stdc++.h>
using namespace std;


int main(){
 int n = 9;
 long arr[n] = {1,2,3,4,5,6,7,8,9};  
 int temp = arr[0];
  for(int i=0; i<n; i++){
    
    if(i == n-1 ){
      arr[i] = temp;
    }else{
      arr[i] = arr[i+1];
    }
    
    cout << arr[i] << " ";
  }


}