#include <stdio.h>

int main() {
    double num1, num2, num3;
    double smallest, largest, sum;

    printf("Enter three numbers: ");
    scanf("%lf %lf %lf", &num1, &num2, &num3);

    smallest = num1;
    if (num2 < smallest) {
        smallest = num2;
    }
    if (num3 < smallest) {
        smallest = num3;
    }

    largest = num1;
    if (num2 > largest) {
        largest = num2;
    }
    if (num3 > largest) {
        largest = num3;
    }

    sum = num1 + num2 + num3;

    printf("The smallest number is: %.2lf\n", smallest);
    printf("The sum of the three numbers is: %.2lf\n", sum);
    printf("The largest number is: %.2lf\n", largest);

    return 0;
}