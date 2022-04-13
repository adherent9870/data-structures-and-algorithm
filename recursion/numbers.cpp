#include<iostream>
using namespace std;
int numbers(int n,int a=0){
    if(n<1){
        return a;
    }
    return numbers(n/10,a+1);
}
int main(){
    int n=347;
    cout << numbers(n) << std:: endl;
    return 0;
}