#include <stdio.h>

int main(void) {
    float fahrenheit, celsius;

    printf("Enter temperature in Fahrenheit: ");
    if (scanf("%f", &fahrenheit) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    celsius = (5.0 / 9.0) * (fahrenheit - 32.0);

    printf("%.2f Fahrenheit is equal to %.2f Celsius\n", fahrenheit, celsius);

    return 0;
}