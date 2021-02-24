#include <stdio.h>

char line[10];
float mile; //float of mile
float kilometer; //float of kilometer

int main(void) {
  printf("Kilometers per hour to Miles per hour converter\n"); //presentation of the program

  printf("Enter kilometers: "); //Tells the user to enter the kilometers
  fgets(line, sizeof(line),stdin);
  sscanf(line, "%f", &kilometer);

  printf("You typed %f kilometers per hour\n", kilometer);//Reminds the users the kilometers

  mile = kilometer * 0.6213712; //Operation to calculate the conversion
    printf("Converted to miles per hour: %f miles per hour\n", mile); //Prints the converted result

  return 0;
}
