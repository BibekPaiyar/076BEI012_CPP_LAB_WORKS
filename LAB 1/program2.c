#include <stdio.h>

struct student{
    char name[50], address[20];
    int roll;
    float marks;

}s[100];

void getData(int );
void showData(int );

void getData(int n){
    for(int i=0 ; i<n ; i++){
        printf("\nEnter name, roll, marks and address:\n");
        scanf("%s %d %f %s", s[i].name, &s[i].roll, &s[i].marks, s[i].address);
    }
}

void showData(int n){
    for(int i=0 ; i<n ; i++){
        printf("\n\nName: %s\nRoll: %d\nMarks: %f\nAddress: %s",s[i].name, s[i].roll, s[i].marks, s[i].address);
    }

}

int main(){

    int n;
    printf("Enter total number of students: ");
    scanf("%d", &n);


    getData(n);
    showData(n);


    return 0;
}
