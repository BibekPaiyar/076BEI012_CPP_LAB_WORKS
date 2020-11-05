// Write a program in CPP to convert the distance in feet and inch entered by the user 
//into distance in meters using the concept o user defined to basic data conversion.

#include <iostream>
using namespace std;

class Distance{
private:
    float feet,inch;

public:
    Distance(float feet = 0,float inch = 0 ){
        this->feet = feet;
        this->inch = inch;
    }
    operator float(){
        float m;
        m = (inch / 12 + feet) / 3.2808;
        return m;
    }
    // WAP in CPP to convert the co-ordinates from Cartesian system to polar system using 
// the concept of user defined to user defined conversion by writing conversion routine 
// in source class.

#include <iostream>
#include <cmath>
#define PI 3.1415
using namespace std;


class Polar{
private:
    float r, angle;
public:
    Polar(float r = 0, float angle = 0){
        this->r = r;
        this->angle = angle;
    }
    void showData(){
        cout << "Polar co-ordinate: (" << r << ", " << angle << ") " << endl;
    }

};


class Cartesian{
private:
    float x, y;

public:
    Cartesian(float x = 0, float y = 0){
        this->x = x;
        this->y = y;
    }
    operator Polar(){
        float r, angle;
        r = sqrt(pow(x,2) + pow(y,2));
        angle = (180/PI)*atan(y/x);     // angle in degree
        return Polar(r, angle);
    }
    void getData(){
        cout << "Enter Cartesian co-ordinates : (x, y)" << endl;
        cin >> x >> y;
    }
    void showData(){
        cout << "Cartesian co-ordinate: (" << x << ", " << y << ") " << endl;
    }

};

int main(){

    Cartesian c;
    c.getData();
    Polar p;
    p = c;
    c.showData();
    p.showData();
    return 0;
}
    void showData(){
        cout << "Distance in feet and inches is : "<< feet <<" feets, " << inch <<" inches."<<endl;
    }
};

int main(){

    Distance d;
    d.getData();
    d.showData();
    float m = d;
    cout << "Distance in meter : " << m << " meters." <<endl;

    return 0;
}
