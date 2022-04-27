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
void newpoint(node *head1,node *head2);
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

void point(node *head1, node *head2){
    if(head1==NULL || head2==NULL){
        return;
    }
    while(head1!=NULL){
         node *temp2=head2;
        while(temp2!=NULL){
            if(head1->data==temp2->data){
                cout << head1->data<< endl;
                return;
            }
            temp2=temp2->next;
        }
        head1=head1->next;
    }

}

int main(){
    node *head1=takeinput();
    node *head2=takeinput();
    print(head1);
    print(head2);
    point(head1,head2);
    return 0;
}