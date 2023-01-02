#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void TreeLogarithmic() {

  // The height of the tree will be 21.
  // That means there will be 21 iterations of '*', growing by
  // natural log.

  // First, we print the initial star.
  printf("\n");
  for (int i = 0; i < log(21) - 1; i++)
    printf(" ");
  printf("*");

  // Now to perform the loop that prints the body of the tree.
  // It begins at '2' instead of '1' as to prevent a blank line thanks
  // to how low the log of 1 is.
  for (int i = 2; i < 23; i++) {

    printf("\n");

    for (int j = 0; j < (3 - log(i)) / 2; j++)
      printf(" ");

    for (int j = 0; j < log(i); j++)
      printf("*");
  }

  // Finally, we print the trunk.
  for (int i = 0; i < 3; i++) {

    printf("\n");

    for (int j = 0; j < log(21) - 2; j++)
      printf(" ");
    printf("*");
  }

  return;
}
