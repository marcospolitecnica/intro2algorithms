#include <stdio.h>

char line[10];
int hour; //integer of hour
int minute; //integer of minute

int main(void) {
  printf("Enter hour(s): "); //tells the user to input hour(s)
  fgets(line, sizeof(line),stdin);
  sscanf(line, "%d", &hour); //analysis of hour

  printf("Enter minute(s): ");//tells the user to input minute(s)
  fgets(line, sizeof(line),stdin);
  sscanf(line, "%d", &minute);//analysis of minutes

  printf("%d hours %d minutes is: %d minutes\n", hour, minute, hour*60 + minute); //prints the result while doing the operation

  return 0;
}
