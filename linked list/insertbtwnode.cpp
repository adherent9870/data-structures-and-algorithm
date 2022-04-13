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
    while(head!=NULL){
        cout << head ->data << " ";
        head= head ->next;
    }
    cout << endl;
}

node * insert(node *head,int i,int data){
    node *newnode=new node(data);
    int count=1;
    node *temp=head;
    if(i==0){
        newnode->next=head;
        head=newnode;
        return head;
    }
    else{
      while(temp!=NULL && count < i-1){
        temp=temp ->next;
        count++;
      }
      if(temp!=NULL){
        newnode->next=temp->next;
        temp->next=newnode;
      }
    }
    return head;
}

int main(){
  node *head=takeinput();
  print(head); 
  int i;
  cin >> i ;
  int data;
  cin >> data;
  head=insert(head,i,data);

  print(head);
  return 0;
}