#include <stdio.h>

int main()
{
    char a;
    printf("enter any character\n");
    scanf("%c", &a);

    if (a >= 'A' && a <= 'Z')
    {
        printf("your character is capital");
    }

    else if(a >= 'a' && a <= 'z')
    {
        printf("your character is small case letter");
    }

    else if(a >= '0' && a <= '9')
    {
        printf("your character is digit");
    }

    else
    {
        printf("your character is special symbol");
    }

    return 0;
}