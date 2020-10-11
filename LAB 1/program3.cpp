#include <iostream>
#define PI 3.1415
using namespace std;

int area(int a, int b){
    return a*b;
}

float area(int rad){
    return (PI*rad*rad);
}

int main(){
    int r,l,b;
    cout<<"Enter length and breadth of rectangle:"<<endl;
    cin>>l>>b;
    cout<<"Area of rectangle = "<<area(l,b)<<endl;
    cout<<"Enter radius of circle :"<<endl;
    cin>>r;
    cout<<"Area of circle = "<<area(r)<<endl;
    return 0;
}
