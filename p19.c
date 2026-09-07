#include <stdio.h>

int main()
{
    char a;
    printf("enter any character\n");
    scanf("%c", &a);

    if(a >= 'a' && a <= 'z')
    {
        printf("your character is small case letter");
    }

    
    else
    {
        printf("your character is not a small case letter");
    }

    return 0;
}