#include <stdio.h>

char line[100];
int cents; //integer of cents
int quarters = 0; //integer of quarters equals 0
int dimes = 0; //integer of dimes equals 0
int nickels = 0; //integer of nickels equals 0
int pennies = 0; //integer of pennis equals 0

int main(){
  printf("Enter the number of cents: "); //asks the user to input cents
  fgets(line, sizeof(line), stdin);
  sscanf(line,"%d", &cents);

  if (cents > 100){
    printf("Please input a correct number lower than $1.00\n"); //Gives the error code asking the user to use a number lower than a $1.00
    return (1);
  } else if (cents < 1){
    printf("Not less than a penny, dummy\n"); //Gives the error than he put less than a penny (and insults him a bit...)
    return (1);
  } else if (cents == 100){
    printf("Huh, you entered a $1.00\n"); // Knowledges the user to have $1.00
  }

  while (1){
    if (cents >= 25){
      ++quarters;
      cents -= 25;
    } else if (cents >= 10){
      ++dimes;
      cents -= 10;
    } else if (cents >=5) {
      ++nickels;
      cents -= 5;
    } else if (cents >= 1) {
      ++pennies;
      --cents;
    } else if (cents == 0){
      break;
    }

  }
  printf("%d quarters, %d dimes, %d nickels, %d pennies\n", quarters, dimes, nickels, pennies); //prints the number of quarters, dimes, nickels and pennnies to the user
  
  return (0);
}
