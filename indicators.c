#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

// calculates a car fine (cents)
// having at least one death or damaged car applies a factor to the equation
// (this is better than if)
// formula: `f = 150 + (death * 2000) + (damagedCar * 5)`
int calculateFine(int death, int damagedCar) {
  return 150 + (death * 2000) + (damagedCar * 5);
}

// bug: non int input
int main(void) {

  int death;
  do {
    printf("Any deaths? 0/1: ");
    scanf(" %d", &death);
  } while ((death != 0) && (death != 1));

  int damagedCar;
  do {
    printf("Any damaged cars? 0/1: ");
    scanf(" %d", &damagedCar);
  } while ((damagedCar != 0) && (damagedCar != 1));

  printf("Fine: %d\n", calculateFine(death, damagedCar));

  return EXIT_SUCCESS;
}
