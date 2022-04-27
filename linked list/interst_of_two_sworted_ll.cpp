#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node *next; 

    node(int data){
        this -> data = data; 
        next=NULL;
    }
};
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
node *intersection(node *head1,node *head2){
    node dummy(0);
    node *ans=&dummy;

    while (head1!=NULL && head2!=NULL)
    {
        if(head1->data==head2->data){
            node *newnode=new node(head1->data);
            ans->next=newnode;
            ans=ans->next;   
            head1=head1->next;
            head2=head2->next;        
        }
        else if(head1->data<head2->data){
            head1=head1->next;
        }
        else{head2=head2->next;}
    }
    return dummy.next;
}

int main(){
    node *head1=takeinput();

    node *head2=takeinput();

    node *result=intersection(head1,head2);
    print(result);
} 