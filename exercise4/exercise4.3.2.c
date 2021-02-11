#include <stdio.h>

float perimeter; // float of perimeter
float area; //float of area

int main(void) {
  printf("You have a rectangle with height of 2.3 inches\n"); //start describing rectangle
  printf("And also a width of 6.8\n");
  perimeter = (6.8*2.0) + (2.3*2.0); //operations for the perimeter
  area = 6.8*2.3; //operations of the area
  printf("The area of the rectangle is %f\n", area); //prints the total area
  printf("The perimeter of the rectangle is %f\n", perimeter); //prints the total perimeter
  return 0;
}
