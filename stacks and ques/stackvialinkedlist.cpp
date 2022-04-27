#include <iostream>
using namespace std;


template <typename T>
class node{
    public:
    T data;
    node<T>*next;
    node(T x){
        this->data=x;
        this->next=NULL;
    }

};

template <typename T>
class stackll{
    node<T> *head;
    int totalsize;
    public:
    stackll(){
        head=NULL;
        totalsize=0;
    }

    int getSize(){
        return totalsize;
    }

    bool isEmpty(){
        return head==NULL;
    }

    void push(T x){
        node<T> *newnode=new node<T>(x);
        newnode->next=head;
        head=newnode;
        totalsize++;
    }

    T pop(){
        if(isEmpty()){
            return 0;
        }
        T rt=head->data;
        node<T>*temp=head;
        head=head->next;
        delete[]temp;
        totalsize--;
        return rt;
    }

    T top(){
        if(isEmpty()){
            return 0;
        }
        return head->data;
    }
};



int main(){
    stackll<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);


    cout << s.top() << endl;
    cout << s.pop() << endl;
    cout << s.getSize() << endl;
    cout << s.isEmpty() << endl;
}