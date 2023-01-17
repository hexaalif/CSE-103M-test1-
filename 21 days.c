
#include <stdio.h>
#include<string.h>

int main()
{
    char buffer[256];

    printf("Sinthia<Enter>\n");
    gets(buffer);
    printf("\nyour name has %d characters and spaces!",strlen(buffer));
    return 0;
}
