#include <stdio.h>
#include <math.h>

char line[80];
int grade; //integer of grade

int main(void){

  printf("What is the grade of the student?: "); //asks the grade of the student
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%d", &grade);

  while (1){

  if (grade <= 60){
    printf("Grade is F\n"); //prints if grade is below or equal to 60
    break;
  } else if (grade >= 61 && grade <=70){
    printf("Grade is D\n"); //prints if grade is below or equal to 61 or 70
    break;
  } else if (grade >=71 && grade <=80){
    printf("Grade is C\n"); //prints if grade is below or equal to 71 or 80
    break;
  } else if (grade >=81 && grade <=90){
    printf("Grade is B\n"); //prints if grade is below or equal to 81 or 90
    break;
  } else if (grade >=91 && grade <= 100){
    printf("Grade is A\n"); //prints if grade is below or equal to 91 or 100
    break;
  } else{
    printf("Not a valid grade\n"); //prints if grade is not valid
    break;
  }
 }

return(0);
}
