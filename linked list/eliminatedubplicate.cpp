#include <iostream>
using namespace std;
#include "node.cpp"

node *takeinput(){
    int data;
    cin >> data;
    node *head=NULL;
    node *tail=NULL;
    while(data!=-1){
        node *newnode=new node(data);
        if(head==NULL){
            head=newnode;
            tail=newnode;
        }
        else{
            tail->next=newnode;
            tail=newnode;
        }
        cin >> data;
    }
    return head;
}

void print(node *head){
    while(head!=NULL){
        cout << head->data << " ";
        head=head->next;
    }
    cout << endl;
}  

node *eliminate(node *head){
    node *temp=head->next;
    node *prev=head;
    while(temp!=NULL){
        if(prev->data==temp->data){
            prev->next=temp->next;
            node *t=temp;
            temp=temp->next;
             delete t;
        }
        else{
            prev=temp;
            temp=temp->next;
        }
    }
    return head;
}

node * recursive(node *head){
    if(head->next==NULL || head==NULL){
        return head;
    }
    else if(head->data==head->next->data){
        node *t=head;
        head=head->next;
        delete t;
        return recursive(head);
    }
    else{
        head->next= recursive(head->next);
        return head;
    }
}

int main(){
    node *head=takeinput();
   // print(head); 
 /*   head=eliminate(head); 
    print(head);  */
    head=recursive(head);
    print(head);
    return 0;
} 