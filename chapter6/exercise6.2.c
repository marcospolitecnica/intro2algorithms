#include <stdio.h>
#include <math.h>

char line[80];
int grade;

int main(void){

  printf("What is the grade of the student?: ");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%d", &grade);

  while (1){

  if (grade <= 60){
    printf("Grade is F\n");
    break;
  } else if (grade >= 61 && grade <=70){
    printf("Grade is D\n");
    break;
  } else if (grade >=71 && grade <=80){
    printf("Grade is C\n");
    break;
  } else if (grade >=81 && grade <=90){
    printf("Grade is B\n");
    break;
  } else if (grade >=91 && grade <= 100){
    printf("Grade is A\n");
    break;
  } else{
    printf("Not a valid grade\n");
    break;
  }
 }

return(0);
}
