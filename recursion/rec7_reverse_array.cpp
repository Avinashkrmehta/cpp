// Print from n to 1 using backtrack
#include<bits/stdc++.h>
using namespace std;

void print_array(int arr[], int n){
 for(int i=0; i< n; i++){
    cout << arr[i] << " ";
 }
}

int reverse_array(int arr[], int n){
    int res[n];
    for(int i=n-1; i>=0; i--){
        res[n-i-1] = arr[i]; 
    }
    print_array(res,n);
    cout << endl;
    return 0;
}

void reverse_array_space_optimized(int arr[], int n){
    int p1=0; int p2=n-1;
    while(p1<p2){
        swap(arr[p1],arr[p2]);
        p1++;p2--;
    }
    print_array(arr,n);
}

void reverse_array_using_recursion(int arr[], int start, int end){
    while(start<end){
        swap(arr[start],arr[end]);
        reverse_array_using_recursion(arr,start + 1,end -1);
    }
}

int main(){
    int n = 5;
    int arr[] = {1,2,3,4,5};
    cout << "Original Array-----> ";
    print_array(arr,n);
    cout << endl;
    cout << "Array after reversing ---> ";
    reverse_array_using_recursion(arr,0,n-1);
    print_array(arr,n);
    
    return 0;
}



