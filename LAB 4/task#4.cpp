// WAP in CPP to convert the co-ordinates from Cartesian system to polar system using the
// concept of user defined to user defined conversion by writing conversion routine 
// in destination class.

#include <iostream>
#include <cmath>
#define PI 3.1415
using namespace std;

class Cartesian{
private:
    float x, y;
public:
    Cartesian(float x = 0, float y = 0){
        this->x = x;
        this->y = y;
    }
    void getData(){
        cout << "Enter Cartesian co-ordinates : (x, y)" << endl;
        cin >> x >> y;
    }
    float xCor(){
        return x;
    }
    float yCor(){
        return y;
    }
    void showData(){
        cout << "Cartesian co-ordinate: (" << x << ", " << y << ") " << endl;
    }

};

class Polar{
private:
    float r, angle;
public:
    Polar(float r = 0, float angle = 0){
        this->r = r;
        this->angle = angle;
    }
    Polar(Cartesian C){
        r = sqrt(pow(C.xCor() ,2)+pow(C.yCor() ,2));
        angle = (180/PI)*(  atan( C.yCor()/C.xCor() ) );
    }
    void showData(){
        cout << "Polar co-ordinate: (" << r << ", " << angle << ") " << endl;
    }

};

int main(){

    Cartesian c;
    c.getData();
    Polar p;
    p = c;
    p.showData();
    return 0;
}