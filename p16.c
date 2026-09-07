#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter any three value\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if (a > b)
    {
        if (a > c)
        {
            printf("the max. value is %d", a);
        }
        else 
        {
            printf("the max value is %d",c);
        }
       
    }
    else if (b > a)
    {
        if (b > c)
        {
            printf("the max value is %d", b);
        }else{
            printf("the max value is %d",c);
        }
       

    
    }
    return 0;
}
    
