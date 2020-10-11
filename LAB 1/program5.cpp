#include <iostream>
using namespace std;

void sum_num(int a=4, int b=5, int c=6){
    cout<<"Sum ="<<(a+b+c)<<endl;
}

int main(){

    sum_num();
    sum_num(12);
    sum_num(12,14);
    sum_num(12,14,16);

    return 0;
}
