#include "tree.h"
#include <stdio.h>
#include <stdlib.h>

int main() {

  // Numeric value to store the user's choice of tree generation:
  int choice;

  printf("\n\nACT's Treeinator");
  printf("\nVersion Alpha 1.0.0");

  printf("\n\nPlease choose one of the following by entering the corresponding "
         "number:");
  printf("\n 1  Linear Tree Generation");
  printf("\n 2  Exponential Tree Generation");
  printf("\n 3  Logarithmic Tree Generation\n");

  // User-input loop; if invalid input is given, loop will repeat:
  while (1) {

    scanf("%d", &choice);

    // In the case the input is valid (1, 2, or 3) we break the loop.
    if (choice == 1 || choice == 2 || choice == 3)
      break;

    // Otherwise, we instruct the user on the correct inputs after telling them
    // their input is invalid.
    else
      printf("\nError! Invalid input! Please input 1, 2, or 3.\n");
  }

  // Then we take the valid input and use its corresponding function:
  switch (choice) {

  case 1:
    TreeLinear();
    break;

  case 2:
    TreeExponential();
    break;

  case 3:
    TreeLogarithmic();
    break;

  default:
    printf("\nError! No clue how this happened, but an invalid input slipped "
           "through!");
    return 1;
  }
}
