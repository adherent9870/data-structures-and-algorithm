#include<iostream>
using namespace std;

class dynamicclass{
    int *arr;
    int nextindex;
    int size;
    public:
       dynamicclass(){
           arr=new int [5];
           nextindex=0;
           size=5;
       }
       dynamicclass(dynamicclass const &f){
           //deep copy
           this -> arr=new int [f.size];
           for(int i=0; i<size; i++){
               this ->arr[i]=f.arr[i];
           } 
           this ->nextindex=f.nextindex;
           this ->size=f.size; 
       }  
       void print(){
           for(int i=0; i<nextindex; i++){
               cout << arr[i] << " ";
           } 
           cout << endl; 
           return ;
       } 
       void add(int element){
           if(nextindex==size){
               int *newarr=new int [2*size];
               for(int i=0; i<size; i++){
                   newarr[i]=arr[i];
               }
               delete []arr;
               arr=newarr;
               size=2*size;
           }  
           arr[nextindex]=element;
           nextindex++;
       }
       void add(int i,int element){
           if(i<nextindex){
               arr[i]=element;
           } 
           else if(i==nextindex){
               add(element);
           } 
           else{
               return;
           }
       }
}; 

int main(){
    dynamicclass s1;
     
    s1.add(1);
    s1.add(2);
    s1.add(3);
    s1.add(4);
    s1.add(5);
    dynamicclass s2(s1); 
    s1.print();
    s2.print();

}