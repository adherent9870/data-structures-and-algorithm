#include <iostream> 
#include <math.h>
using namespace std;

int main() {
	int t,m,i;
	double n;
	std::cin >> t;
	for(int i=0; i<t; i++){
	    std::cin >> m;
	    n=pow((0.143*m),m);
	    i=pow((0.143*m),m);
	    if(n-i <0.5){
	        std::cout << i << std::endl;
	    }
	    else{
	        std::cout << i+1 << std::endl;
	    }
	}
	return 0;
}
