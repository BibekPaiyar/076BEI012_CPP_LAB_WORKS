//program to overload unary ++ for postfix and prefix increment operation on complex
// number using member function

#include <iostream>
using namespace std;

class complex{
    private:
        float real, imag;
    public:
        complex(int r=0 , int i=0){
            real = r;
            imag = i;
        }

        void getData(){
            cout<<"Enter a complex number."<<endl;
            cin>>real>>imag;
        }

        void showData(){
            cout<<"Result = "<<real<<" + i"<<imag<<endl;
        }

        void operator ++(){      //for prefix
           ++real;
           ++imag;
        }

        void operator ++(int){   //for postfix
            real = real++;
            imag = imag++;
        }

};

int main(){

    complex c1(1,2),c2(3,4),c3(5,6);
    // Before increment
    cout<<"Before increment"<<endl;
    c1.showData();
    c2.showData();
    c3.showData();
    cout<<"\nAfter pre-increment"<<endl;
    ++c1;
    ++c2;
    ++c3;
    c1.showData();
    c2.showData();
    c3.showData();

    cout<<"\nAfter post-increment"<<endl;
    c1++;
    c2++;
    c3++;
    c1.showData();
    c2.showData();
    c3.showData();




    return 0;
}
