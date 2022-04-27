#include <iostream>
using namespace std;
template <typename T,typename V>
class paircom{
    T x;
    V y;
    public:
        void setX(T x){
            this->x=x;
        }
        void setY(V y){
            this->y=y;
        }
        T getX(){
            return x;
        }
        V getY(){
            return y;
        }
};

int main(){
    paircom<paircom<int,int>,int>p;
    p.setY(10);
    paircom<int,int>p1;
    p1.setX(20);
    p1.setY(30);
    p.setX(p1);
    cout << p.getX().getX() <<  " " << p.getX().getY() << " " << p.getY() << endl;
    return 0;
}