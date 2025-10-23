#include<bits/stdc++.h>
using namespace std;


int main(){
  int n = 5;
 int arr[5]={10, 0, 20, 0, 30};  
  int last = arr[0];
  int slast = INT_MIN;
  for(int i=0; i<n; i++){
    if(last < arr[i]){
      slast = last;
      last = arr[i];
     
    }
  }
 cout << "second largest element is "<< slast;
  return 0;
}