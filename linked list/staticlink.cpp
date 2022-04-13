#include <iostream>
using namespace std;
#include "node.cpp"
 
void print(node *head){
     while (head !=NULL)
     /*{
        cout << head ->data << " ";
        head=head->next;
     }
    */
     do
     {
        cout << head ->data << " ";
        head=head->next;
     } while (head->next!=NULL);
     
     
}
int main (){ 
    /*
    // STATIC
    node n1(1); 
    
    node n2(2); 

    n1.next=&n2; 
    cout << n1.data << " " << n2.data;
    */
   /*
   // STATIC using head

    node n1(1); 
    node *head=&n1;
    node n2(2); 

    n1.next=&n2; 
    cout << head ->data <<" " << head ->next->data;
   */

   /*
  // dynamically
  node *n3=new node(3);
  node *n4= new node(4);
  */
  //static

   node n1(1); 
   node *head=&n1;
   node n2(2);
   node n3(3);
   node n4(4);
   node n5(5); 

   n1.next=&n2;
   n2.next=&n3;
   n3.next=&n4;
   n4.next=&n5;
   
   print(head);
   
   return 0;

}