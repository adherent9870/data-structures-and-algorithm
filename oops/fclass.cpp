#include <iostream>
using namespace std; 
class fraction{
    private: 
           int numerator; 
           int denominator; 
    public: 
           fraction (int numerator,int denominator){
               this ->numerator=numerator; 
               this ->denominator=denominator;
           } 
           void print(){
               cout<< this->numerator << " " << this ->denominator << endl;
           } 
           void simplify(){
               int gcd=1;
               int j=min(this ->numerator,this -> denominator);  
               for(int i=1; i<=j; i++){
                   if(this ->denominator % i==0  && this ->numerator  % i==0){
                       gcd=i;
                       }
               } 
               this ->denominator=this ->denominator/gcd;
               this ->numerator=this ->numerator/gcd; 
               return;

           }
           fraction add(fraction const &f){
               int lcm= denominator*f.denominator; 
               int x= lcm/denominator; 
               int y= lcm/numerator;;

               int n=numerator*x + f.numerator*y; 
               fraction fnew(n,lcm); 
               fnew.simplify(); 
               return fnew;  
           }
};

int main(){
    fraction f1(10,7); 
    fraction f2(20,7);
    fraction f3=f1.add(f2); 
    f1.print();
    f2.print();
    f3.print(); 
    return 0;
}