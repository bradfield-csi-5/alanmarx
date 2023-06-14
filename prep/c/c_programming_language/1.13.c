// Write a program to print a histogram of the lengths of words in its input.
// It is easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging.

#include <stdio.h>

#define MAX_WORDS 10

int main() {
  int word_lengths[MAX_WORDS];
  int character, number, second_number;

  for (number = 0; number < MAX_WORDS; number++) {
    word_lengths[number] = 0;

    while (word_lengths[number] == 0) {
      while ((character = getchar()) != '\n' && character != ' ' && character != '\t') {
        word_lengths[number]++;
      }
    }
  }

  for (number = 0; number < MAX_WORDS; number++) {
    printf("%2d:", number + 1);

    for (second_number = 0; second_number < word_lengths[number]; second_number++) {
      printf(" * ");
    }

    printf("\n");
  }
}
