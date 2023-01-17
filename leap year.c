
#include<stdio.h>
int main()
{
  int year;
  printf("select a year according to your knowledge=");
  scanf("%d",&year);

  if(year % 400 == 0){
      printf("%d is a leap year", year);
  }
  else if(year % 100 == 0){
    printf("%d is not a leap year", year);
  }
  else if(year % 4 == 0){
    printf("%d is a leap year", year);
  }
  else{
      printf("sinthia pagol",year);
  }
    return 0;
}
