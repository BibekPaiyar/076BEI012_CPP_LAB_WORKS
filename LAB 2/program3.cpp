#include <iostream>
using namespace std;

class complex{
private:
    float real, imag;

public:
    complex(float r = 0, float i = 0){
        real = r;
        imag = i;
    }

    void getData(){
        cout<<"Enter complex number:"<<endl;
        cin>>real>>imag;
    }

    void showData(){
        cout<<"The sum is: "<<real<<" + i"<<imag<<endl;
    }

    complex add(complex cp2){
        complex sum;
        sum.real = real + cp2.real;
        sum.imag = imag + cp2.imag;
        return sum;
    }
};


int main(){

    complex c1, c2(1.4, 2.6), c3;
    c1.getData();
    c3 = c1.add(c2);
    c3.showData();
    return 0;
}
