#include <stdio.h>

char line[100]; //line for input data
float temperature; //float of temperature

int main(void) {
  printf("This program will convert your temperature from centigrade to Fahrenheit.\n"); //prints the presentation of the program
  printf("Please, enter temperature you want to convert, with decimals included: \n"); //tells the user to input temperature
  
  fgets(line, sizeof(line),stdin);
  sscanf(line, "%f", &temperature); //scans the input

  temperature = (9.0/5.0)* temperature + 32; //operations for the temperature

  printf("Your converted temperature from centigrade to Fahrenheit is %f.\n", temperature); //prints converted temperature

  return 0;
}
