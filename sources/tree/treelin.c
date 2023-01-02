#include <stdio.h>
#include <stdlib.h>

void TreeLinear() {

  // The height of the tree will be 5.
  // That means there will be 5 iterations of 3 '*'s.

  // First, we print a centered initial star.
  printf("\n");
  for (int i = 0; i < 15; i++)
    printf(" ");
  printf("*");

  // Then we do the loop that prints the remaining body of the tree.
  for (int i = 1; i < 6; i++) {

    printf("\n");

    // First, we need to print enough whitespaces to center the tree.
    for (int j = 0; j < 15 - ((3 * i) / 2); j++)
      printf(" ");

    // Then we print the proper amount of stars.
    for (int j = 0; j < 3 * i; j++)
      printf("*");
  }

  // Next is to print the trunk:
  for (int i = 0; i < 3; i++) {

    printf("\n");

    for (int j = 0; j < 14; j++)
      printf(" ");

    printf("***");
  }

  return;
}
