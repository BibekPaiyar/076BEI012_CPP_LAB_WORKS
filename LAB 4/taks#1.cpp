// Write a program in CPP to convert the distance in meters entered by the user into 
//distance in feet and inch using the concept of basic to user defined data conversion.

#include <iostream>
using namespace std;

class Distance{
private:
    int feet;
    float inch;

public:
    Distance(int feet = 0, float inch = 0){
        this->feet = feet;
        this->inch = inch;
    }
    Distance(float m){
        float total_feet = 3.2808 * m;
        feet = int(total_feet);
        inch = (total_feet - feet) * 12;
    }
    void getData(){
        cout << "Enter distance in feet and inch:"<<endl;
        cin >> feet >> inch ;
    }
    void showData(){
        cout << "Distance in feet and inches is : "<< feet <<" feets, " << inch <<" inches."<<endl;
    }


};

int main(){

    float m;
    Distance d;
    cout << "Enter Distance in meter :"<< endl;
    cin >> m;
    d = m;
    d.showData();

    return 0;
}