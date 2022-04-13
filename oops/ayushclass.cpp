#include <iostream>
using namespace std;

class fraction{
    private:
     int numerator;
     int denominator;
     public:
     fraction(){
         cout<<"constructor 1 called:its just for a sample"<<endl;
     }
     
     fraction(int numerator,int denominator){
         this->numerator=numerator;
         this->denominator=denominator;
     }
     void display(){
         cout<<"numerator:"<<" "<<this->numerator<<endl;
         cout<<"denominator:"<<" "<<this->denominator<<endl;
     } 
      void simplify(){
              int gcd=1; 
              int j= min(this ->numerator,this ->denominator); 
              for(int i=1; i<=j; i++){
                  if(this ->numerator%i==0 && this ->denominator%i==0){
                      gcd=i;
                  }
              }
              this ->numerator =this ->numerator/gcd;
              this ->denominator =this ->denominator/gcd;
              
          }
          
     void add(fraction f2){
         int lcm=this->numerator*f2.numerator;
         int num=(this->numerator)*(f2.denominator)+(this->denominator)*(f2.numerator);
         this->numerator=num;
         this->denominator=lcm;
         int *z=*this;
          z.simplify();
         return;
     }
};