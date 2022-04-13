#include <iostream> 
using namespace std;
#include <string> 
string permut(string p){
    if(p.empty()){
        return "";
    }  
    char ch=p[0]; 
    string z="[.]"; 
    string x=permut(p.substr(1));
    if(ch=='.'){
        return z+x;
    }
    return ch+x;
}



int main(){
    string p; 
    cin >> p; 

    string s; 

    s=permut(p); 
    cout << s; 

    return 0;
}