#include<stdio.h>
int main()
{


int num;

printf("select any number=");
       scanf("%d", &num );
       if(num%2==0)
       {
           printf("the number is even");

       }
       else
       {
           printf("The number is odd");
       }
       return 0;
}
