#include <stdio.h>

int main(){
    int ts,h,m,s;
    printf("enter time in seconds=");
    scanf("%d",&ts);

    h=ts/(60*60);
    m=ts%(60*60)/60;
    s=(ts%(60*60)%60);

    printf("%d seconds is equl to %d hours,%d minutes and %d seconds",ts,h,m,s);

    return 0;
}