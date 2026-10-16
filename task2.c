#include <stdio.h>

int main(void) {
    int total_seconds, minutes, seconds;

    printf("Enter time in seconds: ");
    if (scanf("%d", &total_seconds) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    minutes = total_seconds / 60;
    seconds = total_seconds % 60;

    printf("%d seconds = %d minute(s) and %d second(s)\n", total_seconds, minutes, seconds);

    return 0;
}