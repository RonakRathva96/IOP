#include <stdio.h>

int main(){
    int h,m,s;

    printf("enter time in hours=");
    scanf("%d",&h);

     printf("enter time in minutes=");
    scanf("%d",&m);

     printf("enter time in seconds=");
    scanf("%d",&s);

    int ts=(h*60*60)+(m*60)+s;

    printf("%d hours,%d minutes and %d seconds is equal to %d seconds",h,m,s,ts);

    return 0;
}