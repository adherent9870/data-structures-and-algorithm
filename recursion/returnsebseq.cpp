#include <iostream>
using namespace std;
#include <string>

string phone[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"}; 

int keypad(string p,string s){
    if(p.empty()){
        cout<< s << endl; 
    }  
    int n=p[0]-'0'; 
    string con=phone[n]; 
    int sizecon=con.length(); 

    for(int i=0; i<sizecon; i++){
        keypad(p.substr(1),s+con[i]);
    }


}
int main(){
    string p;
    cin >> p;
    string s;
    int z=keypad(p,s);
    return 0; 
}