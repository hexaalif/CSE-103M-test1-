#include <stdio.h>

int main()
{
    int a = 10, b = 100, c = 1000;
    a = a + b;
    b = a - b;
    a = a - b;
    b = b + c;
    c = b - c;
    b = b - c;
    printf("a = %d, b = %d, c= %d\n", a, b, c);
    return 0;
}