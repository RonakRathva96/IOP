#include <stdio.h>

int main(){
    int p,r,t;
    
    printf("enter the value of principal amount(in rupees) P =");
    scanf("%d",&p);

     printf("enter the value of rate(in percentage) R =");
    scanf("%d",&r);

     printf("enter the value of time(in years) T =");
    scanf("%d",&t);

printf("the value of simple intrest is %d",p*r*t/100);

    return 0;
}