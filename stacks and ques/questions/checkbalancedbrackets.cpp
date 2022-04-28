#include <iostream>
using namespace std;
#include <stack>


bool check(string s){
    stack<char> temp;
    for(int i=0; i<s.size(); i++){ 
        if(temp.empty()){
            temp.push(s[i]);
        }
        else if(   (temp.top()=='(' && s[i]==')') || (temp.top()=='[' && s[i]==']') || (temp.top()=='{' && s[i]=='}')   ){
            temp.pop();
        }
        else{
            temp.push(s[i]);
        }
    }
    if(temp.empty()){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    string s="{[()()]}";
    if(check(s)){
        cout << "balanced" << endl;
    }
    else{
        cout<< "not balanced" << endl;
    }
    return 0;
}