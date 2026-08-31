#include <stdio.h>

int main(){
    int p,c,m,b,e;
    printf("scored mark out of 100 in physics=");
    scanf("%d",&p);

    printf("scored mark out of 100 in chemistry=");
    scanf("%d",&c);

    printf("scored mark out of 100 in maths=");
    scanf("%d",&m);

    printf("scored mark out of 100 in biology=");
    scanf("%d",&b);

    printf("scored mark out of 100 in english=");
    scanf("%d",&e);

    int t=p+c+m+b+e;

    printf("your total mark out of 500 is %d and your percentage is %d ",t,t/5;

    return 0;
}