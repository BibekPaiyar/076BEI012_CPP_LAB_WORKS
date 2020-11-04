// program to fond the sum of two complex numbers using the concept of the operation
// overloading binary + operator using member function

#include <iostream>
using namespace std;

class complex{
    private:
        float real, imag, num;
    public:
        complex(float real = 0, float imag = 0){
            this->real = real;
            this->imag = imag;
        }

        void getData(){
            cout<<"Enter a complex number."<<endl;
            cin>>real>>imag;
        }

        void showData(){
            cout<<"Data "<<real<<" + i"<<imag<<endl;
        }

        void showSum(){
            cout<<"Sum is \t"<<real<<" + i"<<imag<<endl;
        }

        complex operator +(complex c){
            complex sum;
            sum.real = real + c.real;
            sum.imag = imag + c.imag;
            return sum;
        }

};


int main(){
    complex c1(1,5),c2(2.2,5.1),c3;
    c3 = c1 + c2;
    c1.showData();
    c2.showData();
    c3.showSum();

    return 0;
}
