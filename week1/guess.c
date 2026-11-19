#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand(time(NULL));

  int x = rand() % 100;

  printf("OK, I am thinking of a number in the range [0,99] - see if you can guess it!\n");
  printf("Type a number and press enter to make a guess.\n");

  int guess;

  while (scanf("%d", &guess) == 1) {
    if (guess < x) {
      printf("Too low!\n");
    } else if (guess > x) {
      printf("Too high!\n");
    } else {
      printf("mby\n");
      x = rand() % 100; //reasigns x
    }
  }


  if (scanf("%d", &guess) == 0) {
    printf("Not a integer.\n");
  }

}
