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
 
void push(node **head,int data){
    node *newnode=new node(data);
    newnode->next=*head;
    *head=newnode;
}

node *copy(node *head,node *head2=NULL){
    while(head!=NULL){
        push(&head2,head->data);
        head=head->next;        
    }
    return head2;
}

void check(node *head,node *head2){
    while(head!=NULL && head2!=NULL){
        if(head->data==head2->data){
            head=head->next;
            head2=head2->next;
        }
        else{
            cout << "-1" << endl;
            return;
        }
    }
    cout << "true" << endl;
}

int main(){
    node *head=takeinput();
    node *head2=copy(head);
    print(head);
    print(head2);
    check(head,head2);
}