#include<iostream>
using namespace std;
#include "ayushclass.cpp"
int main(){
    fraction f0();
    fraction f1(10,2);
    fraction f2(15,4);
   f1.add(f2); 
   f1.simplify();
    f1.display();
    f2.display();
    return 0;
}