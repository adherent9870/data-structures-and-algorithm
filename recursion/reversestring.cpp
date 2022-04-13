#include <iostream>
using namespace std;


void reverseString(string s,int i,int j) {  
        int n=s.size();
        if(i>j){ 
            return; 
        } 
        swap(s[i],s[j]);
        reverseString(s,i+1,j-1);
        
    } 

int main(){
    string s; 
    cin >> s; 
    reverseString(s,0,s.size()); 
    cout << s <<endl;
}