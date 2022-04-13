#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t; 
    for(int i=0; i<t; i++){
        int n,x;
        cin >> n >> x;
        int a=0,b=0,c=0;
        if(x%3==0){
            a=a+(x/3);
        }
        if(x%3==1){
            a=a+1+(x/3); 
            b=b+2;
        }
        if(x%3==2){
            a=a+(x/3)+1;
            b++;
        } 
        if(a+b<=n){
            cout << "YES" << endl;
            cout << a << " " << b << " " << n-a-b << endl;
        }
        else{
            cout << "NO" << endl;
        }

    }
    return 0;
}