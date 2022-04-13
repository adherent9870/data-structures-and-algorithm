#include <iostream>
using namespace std;
 class student {
    public:
    char *name;
    int age; 
    public: 
    student(int age,char *name){
        this ->age =age; 
        this ->name=name; 
    } 
    void display(){
        cout << age << " " << name << endl;
    }
};