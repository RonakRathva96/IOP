#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter any three value\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if (a > b && a > c)
    {

        printf("the max. value is %d", a);
    }
    else if (b > a && b > c)
    {

        printf("the max value is %d", b);
    }
    else if (c > a && c > b)
    {

        printf("the max value is %d", c);
    }
    return 0;
}