#include <stdio.h>

char line[10];
int minute; //integer of minute

int main(void) {
  printf("Enter minute(s): "); //tells the user to input minutes
  fgets(line, sizeof(line),stdin);
  sscanf(line, "%d", &minute); //analysis if minutes

  //Here you will see... the easiest method to have the conversion to hours and minutes...
  
  printf("%d minutes is: %d hours %d minutes\n", minute, minute/60, minute%60);// Prints the result as hours and minutes (my mind exploded...)
  
  return 0;
}
