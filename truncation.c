#include <stdio.h>
#include <stdlib.h>

int calculateDecade(int date, int days) {
  int newDate = date + days;
  // drop digit and reinsert the decimal place
  return (newDate / 10) * 10;

}

int main(void)
{
  printf("Enter date: ");
  int date;
  scanf("%d", &date);

  printf("Enter days after: ");
  int days;
  scanf("%d", &days);

  printf("Resulting decate: %d\n", calculateDecade(date, days));

  return EXIT_SUCCESS;
}
