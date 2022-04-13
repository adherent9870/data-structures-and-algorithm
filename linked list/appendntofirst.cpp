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

node *moven(node *head,int n,int len){
    node *temp=head;
    int i=0;
    for(;i<len-n;i++){
        temp=temp->next;
    }
    node *temptail=temp;
    while(temptail->next!=NULL){
        temptail=temptail->next;
    }
    temptail->next=head;
    while (head->next!=temp){
        head=head->next;
    }
    head->next=NULL;
    
    return temp;
}

int length(node*head){
    if(head==NULL){
        return 0;
    }
    int count=0;
    while(head!=NULL){
        count++;
        head=head->next;
    }
    return count;
}

int main(){
    node *head=takeinput();
    print(head); 
    int len=length(head);
    int n;
    cin >> n;
    head=moven(head,n,len);
    print(head);
} 