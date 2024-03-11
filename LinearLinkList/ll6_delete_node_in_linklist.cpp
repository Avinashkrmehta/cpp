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

Node* deleteNode(Node* head){
  Node* temp = head;
  head = temp->next;
  delete(temp);
  return head;
}

void printlinkList(Node* head){
    Node* temp = head;
    while(temp){
      cout << temp->data << " ";
      temp = temp->next;
      // temp = temp->next;
    }
}

Node* deleteTailLinkList(Node* head){
  if (head == NULL || head->next == NULL) return NULL;
  Node* temp = head;
  while(temp->next->next != NULL){
    temp = temp->next;
  }
  delete temp->next;
  temp->next = nullptr;
  return head;
}


Node* deleteNodeInLinkList(Node* head, int n){
  Node* temp = head;
  Node* pre = NULL;
  int count = 0;
  if(head == NULL) return NULL;
  if(n==1){
    Node* temp = head;
    head = head->next;
    free(temp);
    return head;
  }
  while(temp != NULL){
    count+=1;
    if(count == n){
      pre->next = pre->next->next;
      delete(temp);
      break;
    }
    pre = temp;
    temp = temp->next;

  }
  return head;
}

Node* deleteGivenNodeInLinkList(Node* head, int num){
Node* temp = head;
  Node* pre = NULL;
  int count = 0;
  if(head == NULL) return NULL;
  if(num==head->data){
    Node* temp = head;
    head = head->next;
    free(temp);
    return head;
  }
  while(temp != NULL){
    if(temp->data == num){
      pre->next = pre->next->next;
      delete(temp);
      break;
    }
    pre = temp;
    temp = temp->next;

  }
  return head;
}

int main(){
  vector<int> arr = { 5,3,9,0,2,1,5};
  Node* head = convertArrayToLinkList(arr);
  // head =  deleteTailLinkList(head);
  head = deleteGivenNodeInLinkList(head,11);
  printlinkList(head);

  return 0;
}