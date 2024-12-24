/* Patterns for Beginning Programmers (David Bernstein) */
/* I Patterns Requiring Knowledge of Types, Variables, and Arithmetic Operators
 */
/* 3. Digit Manipulation */
/* Example Program: return digits and integer information */
/* Compile with `gcc digits.c -o digits -lm` */

#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int number;
  printf("Enter number: ");
  scanf(" %d", &number);

  // number of digits
  int digits = 0;
  int copy = number; // copy value
  while (copy > 0) {
    copy /= 10;
    digits++;
  }
  printf("Number of digits: %d\n", digits);

  // rightmost digit
  copy = number; // reset copy
  int rightmost = copy % 10;
  printf("Rightmost digit: %d\n", rightmost);

  // leftmost digit
  int leftmost = copy / pow(10, digits - 1);
  printf("Leftmost digit: %d\n", leftmost);

  // reversed number: combining strategies
  int reversed = 0;
  int currentPower = digits - 1; // retrieve last power of 10
  while (copy > 0) {
    int digit = copy % 10;                     // retrieve rightmost number
    copy /= 10;                                // pop it
    reversed += digit * pow(10, currentPower); // increment calculated number
    currentPower--;                            // proceed to next power
  }
  printf("Reversed: %d\n", reversed);

  // is palindrome: combining strategies
  // tip: much easier if you have a reversed copy
  // look up alternative method where you turn the number into array and use
  // pointers
  copy = number; // reset copy
  bool isEven = (copy % 2 == 0);
  bool isPalindrome = false;

  int halfLength =
      digits / 2; // will truncate if odd, no need to calculate middle
  while (halfLength > 0) {
    int rightmost = copy % 10; // retrieve rightmost number
    copy /= 10;                // pop it

    int leftmost = reversed % 10; // retrieve leftmost number
    reversed /= 10;               // pop it

    if (leftmost == rightmost) {
      isPalindrome = true;
      halfLength--;
    } else {
      break;
    }
  }

  if (isPalindrome) {
    printf("Is palindrome\n");
  } else {
    printf("Not palindrome\n");
  }

  return EXIT_SUCCESS;
}
