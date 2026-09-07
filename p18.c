#include <stdio.h>

int main(){
     int a, b, c;
    printf("Enter any three value\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

   (a>b && a>c)?printf("the max value is %d",a):(b>c)?printf("the max value is %d",b):printf("the max value is %d",c);
    
    
    return 0;
}