#include <iostream>
using namespace std;

class fraction{
    private:
    int n;
    int d;
    public :
    fraction (int n,int d){
        this ->d=d;
        this ->n=n;
    } 
   /* fraction & operator++(){
        n=n+d;
        simplify();
        return *this;
    } */
    fraction  operator++(){
        int a=n+d;
        int b=d; 
        fraction fnew(a,b);
        simplify();
        return fnew;
    } 
   void simplify(){
              int gcd=1; 
              int z= min(this ->n,this ->d); 
              for(int i=1; i<=z; i++){
                  if(this ->n%i==0 && this ->d%i==0){
                      gcd=i;
                  }
              }
              this ->n =this ->n/gcd;
              this ->d =this ->d/gcd;
              
          }
    void print(){
        cout << n << " " << d << endl;
        return ;
    }
};  


int main(){ 
    fraction f1(1,7);
    fraction f3=++(++f1); 
    f1.print(); 
    f3.print(); 
    return 0;
}