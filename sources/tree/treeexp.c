#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void TreeExponential() {

  // The height of the tree will be only 4.
  // That means there will be 4 iterations.

  // First, a centered * will be printed.
  printf("\n");
  for (int i = 0; i < 81; i++)
    printf(" ");
  printf("*");

  // Next, we do a for(); loop that will print an increasing amount of *s.
  for (int i = 1; i < 5; i++) {

    printf("\n");

    // We need to print an adequate amount of spaces in order to center the row
    // of *s.
    for (int j = 0; j < 81 - (pow(3, i) / 2); j++)
      printf(" ");

    // Then we print an amount of *s that is appropriate.
    for (int j = 0; j < pow(3, i); j++)
      printf("*");
  }

  // Finally, we print the trunk.
  for (int i = 0; i < 3; i++) {

    printf("\n");

    for (int i = 0; i < 80; i++)
      printf(" ");

    for (int i = 0; i < 3; i++)
      printf("*");
  }
}
