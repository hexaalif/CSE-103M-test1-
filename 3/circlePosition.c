#include <stdio.h>

int main()
{
    float c1, c2, r, x, y, result;
    printf("enter x center");
    scanf("%f", &c1);
    printf("enter y center");
    scanf("%f", &c2);
    printf("enter radius");
    scanf("%f", &r);
    printf("enter x");
    scanf("%f", &x);
    printf("enter y");
    scanf("%f", &y);
    result = ((x - c1) * (x - c1) + (y - c2) * (y - c2));
    if (result > r * r)
    {
        printf("%f is outside circle", result);
    }
    else if (result < r * r)
    {
        printf("%f is inside");
    }
    else
    {
        printf("%f is on circle");
    }
    return 0;
}