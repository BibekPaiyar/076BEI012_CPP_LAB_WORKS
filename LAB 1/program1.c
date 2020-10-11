#include <stdio.h>

struct complex{
    int real;
    int imag;
};

struct complex add_complex(struct complex , struct complex );

void getData(struct complex *c){

    printf("\nEnter complex number: ");
    printf("\nReal Part:");
    scanf("%d",&c->real);
    printf("Imaginary Part:");
    scanf("%d",&c->imag);
}

void showData(struct complex c){

    printf("\nComplex number : %d +i%d", c.real, c.imag);

}

struct complex add_complex(struct complex cc1, struct complex cc2){
    struct complex result;
    result.real = cc1.real + cc2.real;
    result.imag = cc1.imag + cc2.imag;
    return result;
}

int main(){

    struct complex c1, c2, c3;
    getData(&c1);
    getData(&c2);
    c3 = add_complex(c1, c2);
    showData(c3);
return 0;
}
