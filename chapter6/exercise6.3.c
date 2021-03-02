#include <stdio.h>
#include <math.h>

char line[80];
int grade; //integer of grade

int main(void){

  printf("What is the grade of the student?: ");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%d", &grade);

  while (1){

  if (grade <= 60){
    printf("Grade is F\n"); //prints grade with no sign if it's below or equal 60
    break;
  } else if (grade >= 61 && grade <=63){
    printf("Grade is D-\n"); //prints grade with minus sign if it's below or equal to 61 or 63
    break;
  } else if (grade >= 64 && grade <=67){
    printf("Grade is D\n"); //prints grade with no sign if it's below or equal to 64 or 67
    break;
  } else if (grade >= 68 && grade <=70){
    printf("Grade is D+\n"); //prints grade with plus sign if it's below or equal to 68 or 70
    break;
  } else if (grade >= 71 && grade <=73){
    printf("Grade is C-\n"); //prints grade with minus sign if it's below or equal to 71 or 73
    break;
  } else if (grade >= 74 && grade <=77){
    printf("Grade is C\n"); //prints grade with no sign if it's below or equal to 74 or 77
    break;
  } else if (grade >= 78 && grade <=80){
    printf("Grade is C+\n"); //prints grade with plus sign if it's below or equal to 78 or 80
    break;
  } else if (grade >= 81 && grade <=83){
    printf("Grade is B-\n"); //prints grade with minus sign if it's below or equal to 81 or 83
    break;
  } else if (grade >= 84 && grade <=87){
    printf("Grade is B\n"); //prints grade with no sign if it's below or equal to 84 or 87
    break;
  } else if (grade >= 88 && grade <=90){
    printf("Grade is B+\n"); //prints grade with plus sign if it's below or equal to 88 or 90
    break;
  } else if (grade >= 91 && grade <=93){
    printf("Grade is A-\n"); //prints grade with minus sign if it's below or equal to 91 or 93
    break;
  } else if (grade >=94 && grade <=97){
    printf("Grade is A\n"); //prints grade with no sign if it's below or equal to 94 or 97
    break;
  } else if (grade >=98 && grade <=100){
    printf("Grade is A+\n"); //prints grade with plus sign if it's below or equal to 98 or 100
    break;
  } else
  printf("Not a valid grade\n"); //prints that the grade is invalid if it's more than 100
  break;
  } 
return(0);
}
