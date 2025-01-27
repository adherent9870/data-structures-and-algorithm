
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

void swapl(node *(&a), node *(&b)){
    node *t=b;
    b=a;
    a=t;
}


void swapnode(node **head,int x,int y){
    if (x==y)
    {
        return; 
    }

    node **a=NULL,**b=NULL;
    while (*head!=NULL)
    {
        if((*head)->data==x){a=head;}
        else if((*head)->data==y){b=head;}
        head=&((*head)->next);
    } 
    if(a!=NULL && b!=NULL){
        swapl(*a,*b);
        swapl((*a)->next,(*b)->next);
    }
}

int main(){
    node *head=takeinput();
    print(head);
    int x,y;
    cin >> x >> y;
    swapnode(&head,x,y); 
    print(head);
} 