#include <stdio.h>
#include<math.h>
int main(){
    int x,y,n;
     printf("enter the value of x = ");
     scanf("%d",&x);

     printf("enter the value of n = ");
     scanf("%d",&n);

     if (n == 1)
     {
        printf("the value of y is %d",1+x);
     }
     if (n == 2)
     {
        printf("the value of y is %d",1+(x/n));
     }
     if (n == 3)
     {
        printf("the value of y is %d",1+(int)pow(x, n));
     }
     if (n>3||n<1)
     {
        printf("the value of y is %d",1+n*x);
     }

    return 0;
}