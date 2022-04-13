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

void print(node *head,int n){
    int z=-1;
    while(head!=NULL){
        z=z+1;
        if(z==n){
            cout <<head ->data << endl;
        }
        head= head ->next;
    }
}

int main(){
  node *head=takeinput(); 
  int n;
  cin >> n;
  print(head,n);
  return 0;
}