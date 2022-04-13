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

node *del(node *head,int i){
    if(head==NULL){
        node *temp=head;
        delete temp;
        head=NULL;
        return head;
    }
    if(i==0){
        node *temp=head;
        head=head->next;
        delete temp;
        return head;
    }
        head->next=del(head->next,i-1);
        return head;
}

int main (){
    node *head=takeinput();
    print (head);
    
    int i;
    cin >> i;
    head=del(head,i);
    print (head);
    return 0;
}