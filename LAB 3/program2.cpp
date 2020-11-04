//program to overload unary ++ for postfix and prefix increment operation on complex
// number using non-member/friend function

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

        friend void operator ++(complex);     //for prefix

        friend void operator ++(complex, int);  //for postfix

};

void operator ++(complex c){
            ++c.real;
            ++c.imag;
        }

void operator ++(complex c, int){
            c.real++;
            c.imag++;
        }

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
