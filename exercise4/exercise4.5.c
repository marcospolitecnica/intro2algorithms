#include <stdio.h>

int integer; //integer of integer
float fl_num; //float of fl_num
char char_1; //character of char_1

int main(void){
  integer = 2; //statement of integer
  fl_num = 2.0; // statement of fl_num
  char_1 = 'B'; // statement of character

  printf("%f as %%d: %d\n", fl_num, fl_num); //prints the error of %d
  printf("%d as %%f: %f\n", integer, integer); // prints the error of %f
  printf("%c as %%d: %d\n", char_1, char_1); // prints the error of %d

  return(0);
}
