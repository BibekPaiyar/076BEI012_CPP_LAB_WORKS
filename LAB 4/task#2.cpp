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
    void showData(){
        cout << "Distance in feet and inches is : "<< feet <<" feets, " << inch <<" inches."<<endl;
    }
};

int main(){

    Distance d(5,4);
    d.showData();
    float m = d;
    cout << "Distance in meter : " << m << " meters." <<endl;

    return 0;
}