#include <stdio.h>

int main(){
    int p,c,m,e;
    printf("scored mark out of 200 in physics=");
    scanf("%d",&p);

    printf("scored mark out of 200 in chemistry=");
    scanf("%d",&c);

    printf("scored mark out of 200 in mathematics=");
    scanf("%d",&m);

    printf("scored mark out of 100 in entyrance exam=");
    scanf("%d",&e);

    int cm=(m/2)+(c/2)+(p/2)+e;

    printf("the cut off mark is %d ",cm);

    return 0;
}