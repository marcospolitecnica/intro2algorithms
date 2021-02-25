#include <stdio.h>
#include <math.h>

char line[80];
float point_1; //float of the first point
float point_2; //float of the second point
float result; //float of the result

int main(void){

  printf("Distance between two points\n");//program presentation
  
  printf("Enter your first point: ");//asks the user to enter first point
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%f", &point_1);

  printf("Enter your second point: ");//asks the user to enter second point
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%f", &point_2);

  while (1){//start while loop

  result = (point_1*point_1) + (point_2*point_2);//result before sqrt

  if (result == 0){//if the result is 0 (because #*0 =0)
    printf("Both numbers are 0, cannot perform operation\n");//tells the user that cannot do operation (the result is zero)
    break; //breaks cycle to avoid infinite printf
  } else //otherwise, if the result is nonzero
 
  result = sqrt(result); //performs the sqrt of the sum of result

  printf("Distance is %f\n", result); //prints the result of the sqrt
  break;//breaks cycle to avoid infinite printf
  }

  return(0);
}
