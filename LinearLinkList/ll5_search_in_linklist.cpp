#include<bits/stdc++.h>
using namespace std;

class Node{
  public:
  int data;
  Node* next;
  public:
  Node(int data1, Node* next1){
    data = data1;
    next = next1;
  }
  public:
  Node(int data1){
    data = data1;
    next = nullptr;
  }
};

Node* convertArrayToLinkList(vector<int>& arr){
  Node* head = new Node(arr[0]);
  Node* mover = head;
  for(int i=1; i<arr.size(); i++){
    Node* temp = new Node(arr[i]);
    mover->next = temp;
    mover = temp;
  }
  return head;
}

int lengthOfLinkList(Node* head){
  int count = 0;
  Node* temp = head;
  while(temp){
    // cout << temp->data << " ";
    temp = temp->next;
    count+=1;
  }
  return count;
}

int checkPresentOrNot(Node* head, int val){
  Node* temp = head;
  while(temp){
    if(temp->data == val){
      return 1;
    }
    temp = temp->next;
  }
  return 0;
}

int main(){


  vector<int> arr = { 222,3,5,7,9,0 };
  Node* head = convertArrayToLinkList(arr);
  cout << checkPresentOrNot(head,1);



  return 0;
}