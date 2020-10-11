#include <iostream>
#include <cstring>
using namespace std;

class student{
private:
    char name[50], address[25];
    int roll;
    float marks;
public:
    student(){
        strcpy(name, "Name missing.");
        int roll = 0;
        float marks = 0.00;
        strcpy(address, "Address missing.");
    }
    student(char n[], int r, float m, char a[] ){
        strcpy(name, n);
        roll = r;
        marks = m;
        strcpy(address, a);
    }

    void getData(){
        cout<<"Enter name, roll, marks and address."<<endl;
        cin>>name>>roll>>marks>>address;
    }

    void showData(){
        cout<<"\nName\t:"<<name<<"\nRoll\t:"<<roll<<endl;
        cout<<"Marks\t:"<<marks<<"\nAddress\t:"<<address<<endl;
    }

};

int main(){

    student s1;
    s1.getData();
    s1.showData();
    return 0;
}
