#include <stdio.h>

int main(){
    int bs,hra,b,gs;
    printf("enter your basic salary in rupee");
    scanf("%d",&bs);

    printf("enter your HRA in rupee");
    scanf("%d",&hra);

    printf("enter your bouns in rupee");
    scanf("%d",&b);

    gs=bs+hra+b;

    printf("your gross salary is %d rupee",gs);


    return 0;
}