#include <stdio.h>

int main()
{
    int p, c, m, b, e;
    printf("scored mark out of 100 in physics=");
    scanf("%d", &p);

    printf("scored mark out of 100 in chemistry=");
    scanf("%d", &c);

    printf("scored mark out of 100 in maths=");
    scanf("%d", &m);

    printf("scored mark out of 100 in biology=");
    scanf("%d", &b);

    printf("scored mark out of 100 in english=");
    scanf("%d", &e);

    int t = p + c + m + b + e;

    int per = t / 5;

    if (per <= 100 && per >= 90)
    {
        printf("your division is A");
    }
    else if (per <= 89 && per >= 80)
    {
        printf("your division is B");
    }
    else if (per <= 79 && per >= 70)
    {
        printf("your division is C");
    }
    else if (per <= 69 && per >= 60)
    {
        printf("your division is D");
    }
    else if (per <= 59 && per >= 50)
    {
        printf("your division is E");
    }
    else
    {
        printf("your division is F");
    }

    return 0;
}