#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;

    node(int data){
        this->data=data;
        this->next=NULL;
    }
};
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
// recursive
void find(node *head,int n,int i=0){
    
    if(head==NULL){
        return; 
    }
    
    find(head->next,n);
    if(++i==n){
        cout << head->data;
    }
}
//two pointer
void findnth(node *head,int n){
    node *a=head;
    node *b=head;
    if(head==NULL)
    return;

    for(int i=1;i<n; i++){
        b=b->next;
        if(b==NULL){return;}
    }

    while(b!=NULL){
        b=b->next;
        a=a->next;
    }
    cout << a->data << endl;
    return;
}
int main(){
 
    node *head=takeinput();
    print(head); 
    int n; 
    cin >> n;
    find(head,n);
   // findnth(head,n);
    return 0;
}