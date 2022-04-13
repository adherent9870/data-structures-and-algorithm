#include <iostream>
using namespace std;
//initialisation list
/*class list{
     
    public: 
        const int rollnumber; 
        int age;

        list(int a, int r) : rollnumber(r), age(a){// that's why we use initialisation list       
         } 
        void print(){
            cout << rollnumber << " " << age << endl;
        }
}; */


/*// static data member
class student{
    static int totalstudents;
    public :
           
           student(){
               totalstudents++;
           }  
           static int gettotalstudents(){
               return totalstudents;
           }

}; 
int student ::totalstudents=0; //initialisation static members
*/


//operators overloading 
/*
class fraction{
    private :
               
    public :
           int n;
            int d;   
          fraction(int n,int d){
              this -> n=n;
              this -> d=d;
          } 
          void print(){
              cout << n << " " << d << endl;
          } 
          fraction add(fraction const &f){
              int lcm=d * f.d;
              int x=lcm/d;
              int y=lcm/f.d;

              int num=(x*n)+ (y*f.n);
              fraction fnew(num,lcm);
              fnew.simplify(); 
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
}; 
*/

/*
class fraction{
    private :
               
    public :
           int n;
            int d;   
          fraction(int n,int d){
              this -> n=n;
              this -> d=d;
          } 
          void print(){
              cout << n << " " << d << endl;
          } 
          fraction operator+(fraction const &f)const{
              int lcm=d * f.d;
              int x=lcm/d;
              int y=lcm/f.d;

              int num=(x*n)+ (y*f.n);
              fraction fnew(num,lcm);
              fnew.simplify(); 
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
};
*/


class fraction{
    private:
         int n; 
         int d;
    public: 
        fraction (int n,int d){
            this ->n=n;
            this ->d=d;
        }
        void print (){
            cout << n << " " << d << endl;
        } 
        fraction operator*(fraction const &f){
            int a=this ->n*f.n; 
            int b=this ->d*f.d;
            fraction fnew(a,b); 
            fnew.simplify();
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
};
int main(){
   /* list s1(10,1); 

    s1.print(); 
    */
   
  /* // static data members
   student s1;  
   student s2;
   student s3;
   cout << student :: gettotalstudents() << endl;
   */
   fraction f1(1,7);
   fraction f2(2,8);
   fraction f3=f1*f2;
   f3.print();
   
    return 0;

}