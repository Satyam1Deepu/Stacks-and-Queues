template < typename  T , typename  V , typename  W >
class Triplet{
T x;
V y;
W z;
public:
void setX(T x){
        this -> x = x;
    }
    T getX(){
        return x;
    }
    void setY(V y){
        this -> y = y;
    }
    V getY(){
        return y;
    }
    void setZ(W z){
        this -> z = z;
    }
    W getZ(){
        return z;
    }

}
