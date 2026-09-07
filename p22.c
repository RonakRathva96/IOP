#include <stdio.h>

int main(){
    int a,f=1;
    printf("enter any number");
    scanf("%d",&a);

    for(a;a>=1;a--){
        f=f*a;
    }

    printf("the factorial of %d is %d",a,f);
    return 0;
}