#include <stdio.h>

char line[10];
float width; //float of width
float height; //float of height
float perimeter; //float of perimeter

int main(void) {
  printf("Perimeter calculator for a rectangle (you can include decimals)\n"); //program presentation

  printf("Enter width: "); //tells the user to enter width
  fgets(line, sizeof(line),stdin);
  sscanf(line, "%f", &width);//analysis of the input

  printf("Enter height: "); //tells the user to enter height
  fgets(line, sizeof(line),stdin);
  sscanf(line, "%f", &height); //analysis of the input

  if (width==height){ //Detection of the square and exiting the program
    printf("This is a square, not a rectangle\n"); //Stops the program with this text
  }

  else {//Detection of the different width and height
    perimeter = 2 * (height + width); //operations for the perimeter
    printf("Your perimeter is: %f\n", perimeter); //prints the result

  }
  return 0;
}
