#include <stdio.h>

int main(){
    int a,b,c=1;
    printf("Enter the value of base");
    scanf("%d",&a);
    
    printf("Enter the value of power");
    scanf("%d",&b);

    for (int  i = 1; i <= b; i++)
    {
          c=c*a;
    }
    printf("answer=%d",c);
    return 0;
}