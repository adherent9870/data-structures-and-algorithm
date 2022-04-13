#include <iostream>
using namespace std;
int count(int n,int i=0){
    if(n<=0){
        return i;
    }
    else if(n%10==0){
        i+=1;
    }
    return count(n/10,i);
}
int main() {
	// multiplicaion of numbers
	int n=5;
/*	std::cin >> n;  */
	std::cout <<count(n);
	return 0;
}
