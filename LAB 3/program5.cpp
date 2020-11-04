// program to find the product of two 3*3 matrices entered by the user by overloading binary
// * operator

#include <iostream>
using namespace std;

class matrix{
    private:
        int m[3][3];
    public:
        matrix(){                           //default matrix is a zero matrix
            for(int i = 0; i<3; i++ ){
                for(int j = 0; j < 3; j++){
                    m[i][j] = 0;
                }
            }
        }

        void getData(){
            cout<<"Enter matrix:"<<endl;
            for(int i = 0; i <3 ; i++){
                for(int j = 0; j < 3; j++){
                    cout<<"Value ["<<i+1<<"]["<<j+1<<"] :";
                    cin>>m[i][j];
                }
            }
        }

        void showData(){
            cout<<"\nProduct is:"<<endl;
            for(int i = 0; i<3; i++){
                cout<<"|";
                for(int j = 0; j<3; j++){
                    cout<<m[i][j]<<"\t";
                }
                cout<<"|\n";
            }
        }

        matrix operator *(matrix a){
            matrix product;
            for(int i = 0; i < 3; i++){
                for(int j = 0; j < 3; j++){
                    for(int k = 0; k <3 ; k++){
                        product.m[i][j] += m[i][k] * a.m[k][j];
                    }       // k terminates
                }           // j terminates
            }               // i terminates
            return product;
        }
};


int main(){

    matrix m1, m2, m3;
    m1.getData();
    m2.getData();

    m3 = m1*m2;
    m3.showData();

    return 0;
}