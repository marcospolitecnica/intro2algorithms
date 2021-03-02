#include <stdio.h>

char line[100];
int year; //integer of year

int main (){
  printf("Please, enter a year: ");//asks user for a year
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%d", &year);

  if (year%400==0){//if the division of the year is 0
    printf("%d = leap year\n", year); //print that is a leap year
  } else if (year%100==0){//if the division of the year is 0
    printf("%d = not a leap year\n", year);//print that is not a leap year
  } else if (year%4==0){//if the division of the year is 0
    printf("%d = leap year\n", year); //print that is a leap year
  } else {
    printf("%d = no a leap year\n", year); //print that is not a leap year
  }
return (0);
}
