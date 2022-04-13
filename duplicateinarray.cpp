#include <iostream>
using namespace std; 
int main(){
    int n; 
    int arr[n]; 
    for(int i=0; i<n; i++){
        cin >> arr[i]; 
    } 
    int sum=0; 
    for(int i=0; i<n; i++){
        sum=sum+arr[i];
    } 
    cout << sum-((n-2)*(n-1)/2) << endl; 
    return 0;
}