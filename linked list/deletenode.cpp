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

node * del(node *head,int i){
    int count=1;
    node *temp=head;
    node *a;
    node *b;
    if(i==0){
        head=temp->next;
        delete temp;
        return head;
    }
    else{   
       while(temp !=NULL && count <i-1 ){
        temp=temp->next;
        a=temp ->next;
        b=a->next;
        count++;   
       }
       if(temp!=NULL){
        temp->next=b;
        delete a;
       }
    }
    
    return head;
}

int main(){
  node *head=takeinput();
  print(head); 
  int i;
  cin >> i;
  head= del(head,i);
  print(head);
  return 0;
}