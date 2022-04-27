template <typename T,typename V>
class pair{
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
            return this->x;
        }
        V getY(){
            return this->y;
        }
};
