/* Celsius to Fahrenheit Table */

#include <stdio.h>

#define STEP 20
#define LIMIT 100

double celcius_to_fahrenheit(int celsius);

int main() {
  float celsius = 0;

  printf("%s %s\n", "Celsius", "Fahrenheit");

  while (celsius <= LIMIT) {
    printf("%7.0f %10.1f\n", celsius, celcius_to_fahrenheit(celsius));
    celsius += STEP;
  }

  return 0;
}

double celcius_to_fahrenheit(int celsius) {
  return ((9.0 / 5.0) * celsius) + 32.0;
}
