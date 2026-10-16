#include <stdio.h>

int main(void) {
    int count = 0;
    int ch;

    while ((ch = getchar()) != EOF) {

        if (ch >= '0' && ch <= '9') {
            count++;
        }
        else if (ch == '\n') {
            printf("%d\n", count);
            break;
        }
    }

    return 0;
}