#include <stdio.h>

int main() {
    int n;  // Height of the triangle (number of rows)

    // Take input for the height of the triangle
    scanf("%d", &n);

    // Loop to print each row
    for (int i = 1; i <= n; i++) {
        // Loop to print numbers in each row
        for (int j = 1; j <= i; j++) {
            // Print alternating 1 and 0
            if ((i + j) % 2 == 0) {
                printf("1 ");
            } else {
                printf("0");
            }
        }
        printf("\n");  // Move to the next line after each row
    }

    return 0;
}
