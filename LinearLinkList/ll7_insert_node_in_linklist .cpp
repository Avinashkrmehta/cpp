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



void printlinkList(Node* head){
    Node* temp = head;
    while(temp){
      cout << temp->data << " ";
      temp = temp->next;
      // temp = temp->next;
    }
}

Node* insertHeadToNode(Node* head, int el){
  Node* x = new Node(el);
  x->next = head;
  head = x;
  return head;
}

Node* insertTailToNode(Node* head, int el){
  if (head == NULL){
    return new Node(el);
  }
  Node* temp = head;
  while(temp->next != NULL){
    temp = temp->next;
  }
  Node* newEle = new Node(el);
  temp->next = newEle;
  return head;
}

Node* insertNodeInpostionOfLinkList(Node* head, int n, int el){
  Node* temp = head;
  Node* pre = NULL;
  int count = 0;
  if(head == NULL) return NULL;
  if(n==1){
    Node* temp = head;
    Node* newEle = new Node(el);
    newEle->next = head;
    head = newEle;
    return head;
  }
  while(temp != NULL){
    count++;
    if(count == n){
      Node* newEle = new Node(el);
      pre->next = newEle;
      newEle->next = temp;
      return head;
    }
    pre = temp;
    temp = temp->next;

  }
  return head;
}

Node* insertNodeBeforeGivenElementOfLinkList(Node* head, int n, int el){
  Node* temp = head;
  Node* pre = NULL;
  int count = 0;
  if(head == NULL) return NULL;
  if(n== head->data){
    Node* temp = head;
    Node* newEle = new Node(el);
    newEle->next = head;
    head = newEle;
    return head;
  }
  while(temp != NULL){
    if(temp->data == n){
      Node* newEle = new Node(el);
      pre->next = newEle;
      newEle->next = temp;
      return head;
    }
    pre = temp;
    temp = temp->next;

  }
  return head;
}


int main(){
  vector<int> arr = { 5,3,9,0,2,1,5};
  Node* head = convertArrayToLinkList(arr);
  // // head =  deleteTailLinkList(head);
  // head = deleteGivenNodeInLinkList(head,11);
 head = insertNodeBeforeGivenElementOfLinkList(head, 5, 10);
  printlinkList(head);

  return 0;
}