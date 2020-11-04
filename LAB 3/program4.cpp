// program to fond the sum of two complex numbers using the concept of the operation
// overloading binary + operator using non-member/friend function

#include <iostream>
using namespace std;

class complex{
    private:
        float real, imag;
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

        friend complex operator +(complex , complex);

};

complex operator +(complex s1, complex s2){         // add two complex numbers using + operator
    complex sum;
    sum.real = s1.real + s2.real;
    sum.imag = s1.imag + s2.imag;
    return sum;
}

int main(){
    complex c1,c2,c3;

    c1.getData();
    c2.getData();

    c3 = c1 + c2;
    c3.showSum();

    return 0;
}
