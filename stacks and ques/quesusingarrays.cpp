#include <iostream>
using namespace std;
template <typename T>
class queusingarray{
    T *data;
    int nextindex;
    int firstindex;
    int size;
    int capacity;
    public:
        queusingarray(int s){
            data=new int[s];
            nextindex=0;
            firstindex=-1;
            size=0;
            capacity=s;
        }
        int getsize(){
            return size;
        }

        bool isEmpty(){
            return size==0;
        }

        void enqueue(T element){
            data[nextindex]=element;
            nextindex=(nextindex+1)%capacity; 
            if(firstindex==-1){
                firstindex=0;
            }
            size++;
        }
        T front(){
            if(isEmpty()){
                cout <<"queue is empty!" << endl; 
                return 0;
            }
            return data[firstindex];
        }

        T dequeue(){
            if(isEmpty()){
                cout << "queue is empty!" << endl;
                return 0;
            }
            T ans=data[firstindex];
            firstindex=(firstindex+1) %capacity;
            size--;
            if(size==0){
                firstindex=-1;
                nextindex=0;
            }
            return ans;
        }
};


int main(){
    queusingarray<int>p(5);
    p.enqueue(10);
    p.enqueue(20);
    p.enqueue(30);
    p.enqueue(40);
    p.enqueue(50);
    p.enqueue(60);

    cout <<p.front() << endl;
    cout << p.dequeue() << endl;
    cout << p.dequeue() << endl;
    cout << p.getsize() << endl;
    return 0;

}