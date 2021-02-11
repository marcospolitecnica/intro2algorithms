#include <stdio.h>

int perimeter; // integer of perimeter
int area; //integer of area

int main(void) {
  printf("You have a rectangle with height of 5 inches\n"); //start describing rectangle
  printf("And also a width of 3\n");
  perimeter = (3*2) + (5*2); //operations for the perimeter
  area = 3*5; //operations of the area
  printf("The area of the rectangle is %d\n", area); //prints the total area
  printf("The perimeter of the rectangle is %d\n", perimeter); //prints the total perimeter
  return 0;
}
