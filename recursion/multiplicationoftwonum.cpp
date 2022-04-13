#include <iostream>
using namespace std;
int multiplicaion(int x,int y){
    if( y==0){
        return 0;
    }
    return x+multiplicaion(x,y-1);
}
int main() {
	// multiplicaion of numbers
	int x,y;
	std::cin >> x >> y;
	std::cout <<multiplicaion(x,y);
	return 0;
}
