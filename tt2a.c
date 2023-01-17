#include <stdio.h>

int main()
{
    int i = 1;
    if (--i)
    {
        printf("%d\n", i++);
        printf("%d\n", (i & 1));
        printf("if = %d\n", i *= 2);
    }
    else
    {
        printf("%d\n", ++i);
        printf("%d\n", (i | 1));
        printf("else = %d\n", i /= 2);
    }
    return 0;
}