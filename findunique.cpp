#include <iostream>
using namespace std; 
int main(){
    int arr[]={2,2,1,1,3}; 
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum=0; 
    for(int i=0; i<n; i++){
        sum=sum^arr[i];     
    } 
    cout << sum <<endl; 
    return 0;
}