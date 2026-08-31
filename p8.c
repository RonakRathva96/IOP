#include <stdio.h>

int main(){
    int s=31558150,d,h,m;

    d=s/(24*60*60);
    h=(s%(24*60*60))/(60*60);
    m=(s%(24*60*60))%(60*60)/60;

    printf("earth takes a period of revolution of 31558150 second it means %d days,%d hours and %d minutes ",d,h,m);
    return 0;
}