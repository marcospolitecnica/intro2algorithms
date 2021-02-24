//***************************************************//
//* Program to convert hours and minutes to seconds *//
//***************************************************//


#include <stdio.h>

char line[10];
int hour; //integer of hour
int minute; //integer of minute

int main(void) {
  printf("Enter hour(s): ");//tells the user to input hours
  fgets(line, sizeof(line),stdin);
  sscanf(line, "%d", &hour);//analysis of the input

  printf("Enter minute(s): "); //tells the user to input the minutes
  fgets(line, sizeof(line),stdin);
  sscanf(line, "%d", &minute);//analysis of input

  printf("%d hour(s) and %d minute(s) is: %d seconds\n", hour, minute, (hour*3600) + (minute*60));

  return 0;
}
