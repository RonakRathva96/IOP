#include <stdio.h>

int main(){
    float c,f;

    printf("Enter the value of temperature in ferenhit = ");
    scanf("%f",&f);

    c=(f-32)*5/9;
    printf("%f ferenhit is equl to %f degree centigrade",f,c);

    return 0;
}