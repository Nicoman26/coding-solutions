#include <stdio.h>

int main() {
    int n, m;
    float x, y;

    // Input two integers
    scanf("%d %d", &n, &m);

    // Input two floats
    scanf("%f %f", &x, &y);

    // Integer operations
    printf("%d %d\n", n + m, n - m);

    // Float operations (rounded to 1 decimal place)
    printf("%.1f %.1f\n", x + y, x - y);

    return 0;
}
