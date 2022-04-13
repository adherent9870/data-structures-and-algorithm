#include<iostream>
using namespace std;
int sumofarray(int *p,int n){
    if(n==1){
        return p[0];
    }
    return p[0]+sumofarray(p+1,n-1);
}
int main(){
    int n;
    std :: cin>> n;
    int *p=new int[n];
    for(int i=0; i<n; i++){
        cin>> p[i];
    }
    cout<< sumofarray(p,n); 
    delete []p;
    return 0;
}   