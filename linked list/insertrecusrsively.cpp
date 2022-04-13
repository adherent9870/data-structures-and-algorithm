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

node *del(node *head,int i,int data){
    if(head==NULL){
        node *newnode=new node(data);
        
        return newnode;
    }
    if(i==0){
        node *newnode=new node(data);
        newnode->next=head;
        
        return newnode;
    }
        head->next=del(head->next,i-1,data);
        return head;
}

int main (){
    node *head=takeinput();
    print (head);
    
    int i;
    cin >> i;
    int data;
    cin >>data;
    head=del(head,i,data);
    print (head);
    return 0;
}