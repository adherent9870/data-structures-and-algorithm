#include <iostream>
using namespace std;

class stackusingarays{
    int *data;
    int nextIndex;
    int capacity;
    public:

        stackusingarays(){
            data=new int[4];
            nextIndex=0;
            capacity=4;
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
                int *newdata=new int[2*capacity];
                for(int i=0; i < capacity; i++){
                    newdata[i]=data[i];
                }
                capacity *=2;
                delete [] data;
                data=newdata;
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
    stackusingarays p;
    p.push(10);
    p.push(20);
    p.push(30);
    p.push(40);
    p.push(50); 
    p.push(60);

    cout << p.top() << endl;
    p.pop();
    cout << p.size() << endl;
    cout << p.top() << endl;
    cout << p.isEmpty() << endl;




}