#include <iostream>
using namespace std;
#include "node.cpp"
node *takeinput(){
    int data; 
    cin >> data;
    node *head=NULL; 
    node *tail=NULL;
    while(data != -1){
        node *newnode=new node(data);
        if(head==NULL){
            head=newnode;
            tail=newnode;
        }
        else {
            tail ->next=newnode;
            tail=newnode;
        }
        cin >> data;
    }
    return head;
}

void print(node *head){
    int n=0;
    while(head!=NULL){
        n+=1;
        head= head ->next;
    }
    cout << n;
}

int main(){
  node *head=takeinput();
  print(head);
  return 0;
}