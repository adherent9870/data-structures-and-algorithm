#include <iostream>
using namespace std;

class stackusingarays{
    int *data;
    int nextIndex;
    int capacity;
    public:

        stackusingarays(int totalsize){
            data=new int[totalsize];
            nextIndex=0;
            capacity=totalsize;
        }

        //return the number of element in stack
        int size(){
            return nextIndex;
        } 

        //check if array is empty
        bool isEmpty(){
            return nextIndex==0;
        }

        //insert element in stack
        void push(int element){
            if(nextIndex==capacity){
                cout << "abey ruk ja stack full ho gya h" << endl;
                return;
            }
            data[nextIndex]=element;
            nextIndex++;
        }

        //delete element
        void pop(){
            if(nextIndex==0){
                cout << "andha h kya stack already khali h" << endl;
                return;   
            }
            nextIndex--;
            return;
        }

        //top 
        int top(){
            return data[nextIndex-1];
        }

};



int main(){
    stackusingarays p(4);
    p.push(10);
    p.push(20);
    p.push(30);
    p.push(40);
    p.push(50);

    cout << p.top() << endl;
    p.pop();
    cout << p.size() << endl;
    cout << p.top() << endl;
    cout << p.isEmpty() << endl;




}