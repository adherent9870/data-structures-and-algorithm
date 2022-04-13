#include <string.h>
class student{
    int age; 
    int a;
    int const date; 
    public: 
    char *name;
    /*student(int age, char *name){
        this ->age=age; 
        // shallow copy


        // deep copy
        this ->name=new char [strlen(name)+1];
        strcpy(this ->name,name);
    }

    student(student const &s){
        this ->age=age; 
        // shallow copy


        // deep copy
        this ->name=new char [strlen(s.name)+1];
        strcpy(this ->name, s.name);
        
    }
    */
   student(int a,int b): a(a),date(b){

   } 
};