#include <stdio.h>

char line[100];
int answer;

int main (){
  printf("How can you print a string in C?\n"); //asks the question to the user
  printf("1 = printf\n"); //show answer one
  printf("2 = print\n"); //show answer 2
  printf("Enter number: "); //waits for answer
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%d", &answer);

  if (answer == 1){
    printf("Correct! We use printf to print a line.\n"); //prints if the answer is 1
  } else {
    printf("Not quite, try again.");//incorrect answer, try again
  }


  return (0);
}
