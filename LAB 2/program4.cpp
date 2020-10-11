#include <iostream>
using namespace std;

class time{
private:
    int hrs, mins, sec;
public:
    time(){
        hrs = 0;
        mins = 0;
        sec = 0;
    }
    time(int h, int m, int s){
        hrs = h;
        mins = m;
        sec = s;
    }
    time(const time &r){
        hrs = r.hrs;
        mins = r.mins;
        sec = r.sec;
    }

    ~time(){
        cout<<"Time :"<<hrs<<":"<<mins<<":"<<sec<<" destructed."<<endl;
    }

    void getData(){
        cout<<"Enter time (HH:MM:SS) :"<<endl;
        cin>>hrs>>mins>>sec;
    }

    void showData(){
        cout<<"Time :"<<hrs<<":"<<mins<<":"<<sec<<endl;
    }


};





int main(){

    time t1, t2(2, 50, 35), t3;
    t3 = t2;
    t1.showData();
    t2.showData();
    t3.showData();

    return 0;
}
