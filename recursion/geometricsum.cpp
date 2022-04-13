#include <iostream> 
#include <math.h>
using namespace std;
double sum(int n){
    if(n==0){
        return 1;
    }
    double ans=(1/pow(2,n))+sum(n-1);
    return ans;
}
int main() {
	// geometric sum
	int n;
	std::cin >> n;
	std::cout <<sum(n);
	return 0;
}
