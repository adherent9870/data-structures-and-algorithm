#include <iostream>
#include <string> 
#include <vector>
using namespace std;
string phone[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};   
vector <string>  ans;
void keypad(string p,string s){
    if(p.length()==0){
      // cout << s <<endl; 
      ans.push_back(s); 
   //  ans=ans +s;
       return;
    }  
    int n=p[0]-'0';
    string con=phone[n];
    int sizofcon=con.length();
    for(int i=0; i<sizofcon; i++){
        
        keypad(p.substr(1),s+con[i]);
    }
}
    
int main() {
	// print keypad
	string n;
	string output;
	std::cin >> n;
	keypad(n,output); 
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << endl;
    }	
    return 0;
}