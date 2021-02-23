#include <stdio.h>

char line[10];
float radius; //float of radius
float volume; //float of volume

int main(void) {
  printf("Calculator of a volume of a sphere\n"); //introduction of the program
  printf("Enter your radius lenght (you can include decimals): "); //tells the user to input the radius
  
  fgets(line, sizeof(line),stdin);
  sscanf(line, "%f", &radius);

  volume = (4.0/3.0)* 3.1416 * (radius * radius * radius); //operates the formula for a volume

  printf("You wrote your radius of: %f.\n", radius); //reminds to the user the radius
  printf("Your calculated volume is %f\n", volume); //result of the volume

  return 0;
}
