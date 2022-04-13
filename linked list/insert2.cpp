#include<iostream>
using namespace std;

#include "node.cpp"


// taking input for linked list
node  *takeinput(){
    int data;
    cin >> data ;

    node *head=NULL;
    node *tail=NULL;
    while(data != -1){
        node *newnoode=new node(data);

        if(head==NULL){
            head=newnoode;
            tail=newnoode;
        }
        else{
            tail->next=newnoode;
            tail=newnoode;
        }
        cin >> data;
    }
    return head;
}

// print a linked list
void print(node *head){
    while(head != NULL){
        cout << head ->data << " ";
        head=head->next;
    }
    cout << endl;
}

// add a node a front
void push(node **head,int data){
    node *newnode=new node(data);
    newnode->next=*head;
    *head=newnode;
}

int main(){
    node *head=takeinput();
    print(head);

    int n;
    cin >> n;
    deleteiterative(head,n);


//    push(&head,7);
 //   print(head);
  //  insertat(&head,6);
} 
 
void insertat(node *prev, int data){
    if(prev==NULL){
        return;
    }
    node *newnode= new node(data);
    newnode->next=prev->next;
    prev->next=newnode;
}

void deleteiterative(node *head,int key){
    node *prev=NULL;
    while(head->data!=key && head!=NULL){
        prev=head;
        head=head->next;
    }
}


