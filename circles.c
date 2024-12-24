/* Patterns for Beginning Programmers (David Bernstein) */
/* I Patterns Requiring Knowledge of Types, Variables, and Arithmetic Operators
 */
/* 4. Arithmetic on the circle */
/* Example Program: return digits and integer information */
/* Compile with `gcc circles.c -o circles` */
#include <stdlib.h>
#include <stdio.h>

int advanceWeekday(int currentDay, int daysToAdvance) {
  int cardinality = 7;
  return (currentDay + daysToAdvance) % cardinality;
}

int main(void)
{
  int day;
  printf("Enter current day number (0-6): ");
  scanf(" %d", &day);
    
  int toAdvance;
  printf("Enter days to advance: ");
  scanf(" %d", &toAdvance);

  printf("Resulting weekday: %d\n", advanceWeekday(day, toAdvance));

  int cardinality = 7;
  int passes = (day + toAdvance) / cardinality;

  printf("%d mondays in between\n", passes);

  return EXIT_SUCCESS;
}
