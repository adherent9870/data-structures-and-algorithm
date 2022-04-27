

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

void swap(node *a, node *b){
    node *t=b;
    b=a;
    a=t;
    return;
}


void move(node *head){
    if(head==NULL && head->next==NULL ){return;}

    node *temp=head;
    while(head!=NULL && head->next!=NULL){
        swap(head->data,head->next->data);
        head=head->next;
    }
    return;
}

int main(){
    node *head=takeinput();
    print(head);
    move(head); 
    print(head);
} 