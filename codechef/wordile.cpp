#include <iostream>
#include <string>
using namespace std;
int main(){
    int t; 
    cin >> t;
    for(int z=0; z<t; z++){
        string s; 
        string t;
        cin >> s;
        cin >> t; 
        string m;
        int n=s.size(); 
        for(int i=0; i<n; i++){
            if(s[i]==t[i]){
                m.push_back('G');
            }
            else{
                m.push_back('B');
            }
        }
        cout << m << endl;

    }
    return 0;
}