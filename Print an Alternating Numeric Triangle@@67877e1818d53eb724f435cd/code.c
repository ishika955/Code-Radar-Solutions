
#include <stdio.h>

int main() {
    int n;  // Height of the triangle (number of rows)

    // Take input for the height of the triangle
    scanf("%d", &n);

    // Loop to print each row
    for (int i = 1; i <= n; i++) {
        // Print leading spaces for proper alignment
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Loop to print numbers in each row
        for (int j = 1; j <= i; j++) {
            // Print alternating 1 and 0
            if ((i + j) % 2 == 0) {
                printf("1 ");
            } else {
                printf("0 ");
            }
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
