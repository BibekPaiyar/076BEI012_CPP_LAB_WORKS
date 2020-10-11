#include <iostream>
using namespace std;

inline int square(int a){
    return a*a;
}

int main(){
    int sum = 0, n;
    cout<<"Enter n:"<<endl;
    cin>>n;
    for(int i= 1; i<=n; i++){
        sum = sum + square(i);
    }
    cout<<"Sum = "<<sum<<endl;
    return 0;
}
