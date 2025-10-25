#include <stdio.h>

/* Sum two decimal digits (0-9). Returns -1 on invalid input. */
int sum_digits(int a, int b) {
    if (a < 0 || a > 9 || b < 0 || b > 9) return -1;
    return a + b;
}

/* Example usage */
int main(void) {
    int x = 4, y = 7;
    int s = sum_digits(x, y);
    if (s < 0) {
        fprintf(stderr, "Invalid digit(s)\n");
        return 1;
    }
    printf("%d + %d = %d\n", x, y, s);
    return 0;
}