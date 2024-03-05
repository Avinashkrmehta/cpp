#include<bits/stdc++.h>
using namespace std;


// Sortting the given array and take last element from array

int sortArray(vector<int>& arr){
  sort(arr.begin(), arr.end());
  return (arr[arr.size()-1]);
}

int main(){
  vector<int> arr = {3,7,8,1,2,5,7};
  vector<int> arr1 = {33,17,38,61,32,75,37};

  cout << "The largest element in the array is"<< sortArray(arr) << endl;
  cout << "The largest element in the array is"<< sortArray(arr1) << endl;
  return 0;
}

// BRUTE FORCE METHOD TO FIND THE LARGEST ELEMENT

// int main(){
//   int n;
//   cin >> n;
//   int arr[n];
//   int max = arr[0];
//   for(int i=0; i<n; i++){
//     cin >> arr[i];
//     if(arr[i] > max){
//       max = arr[i];
//     }
//   }
//   cout << max;
//   return 0;
// }