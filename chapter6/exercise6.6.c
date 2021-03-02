#include <stdio.h>

char line[100];
int hour; //integer of hour
int wage=190; //integer of wage (in Mexican Peso)

int main (){
  printf("How many hours has he/she worked this week?: ");//asks the user how many hours the employee worked
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%d", &hour);

  if (hour >= 130){
    printf("Hey, this person has worked more than the corresponding hour\n");//tells the user if the employee has worked more than 130 hour (with the hour and a half added)
    wage = (hour * wage);
    printf("The wage is: %d\n", wage);//prints the total wage
  } else {
    wage = (hour * wage);
    printf("The wage is: %d\n", wage);//prints the total wage
  }
  return (0);
}
