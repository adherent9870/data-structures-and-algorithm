
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

/*

// C++ program to swap two given nodes of a linked list
#include <iostream>

using namespace std;

// A linked list node class
class Node {

public:
	int data;
	class Node* next;

	// constructor
	Node(int val, Node* next)
		: data(val)
		, next(next)
	{
	}

	// print list from this
	// to last till null
	void printList()
	{

		Node* node = this;

		while (node != NULL) {

			cout << node->data << " ";
			node = node->next;
		}

		cout << endl;
	}
};

// Function to add a node
// at the beginning of List
void push(Node** head_ref, int new_data)
{

	// allocate node
	(*head_ref) = new Node(new_data, *head_ref);
}

void swap(Node*& a, Node*& b)
{

	Node* temp = a;
	a = b;
	b = temp;
}

void swapNodes(Node** head_ref, int x, int y)
{

	// Nothing to do if x and y are same
	if (x == y)
		return;

	Node **a = NULL, **b = NULL;

	// search for x and y in the linked list
	// and store their pointer in a and b
	while (*head_ref) {

		if ((*head_ref)->data == x) {
			a = head_ref;
		}

		else if ((*head_ref)->data == y) {
			b = head_ref;
		}

		head_ref = &((*head_ref)->next);
	}

	// if we have found both a and b
	// in the linked list swap current
	// pointer and next pointer of these
	if (a && b) {

		swap(*a, *b);
		swap(((*a)->next), ((*b)->next));
	}
}

// Driver code
int main()
{

	Node* start = NULL;

	// The constructed linked list is:
	// 1->2->3->4->5->6->7
	push(&start, 7);
	push(&start, 6);
	push(&start, 5);
	push(&start, 4);
	push(&start, 3);
	push(&start, 2);
	push(&start, 1);

	cout << "Linked list before calling swapNodes() ";
	start->printList();

	swapNodes(&start, 6, 1);

	cout << "Linked list after calling swapNodes() ";
	start->printList();
}

*/