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
//method 1=loop
node *reversell(node *head){
    node *prev=NULL;
    node *next=NULL;
    node *curr=head;
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    } 
    return prev;
}
// method 2=recursion
node *recursive(node *head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    node *temp=recursive(head->next);
    head->next->next=head;
    head->next=NULL;
    return temp;
}

int main(){
    node *head=takeinput();
   // print(head);
  //  head=reversell(head); 
    head=recursive(head);
    print(head);
}