
#include <stdio.h>

int main() {
    int n = 5;  // Height of the pyramid (number of rows)

    // Upper half of the palindromic pyramid
    for (int i = 1; i <= n; i++) {
        // Print leading spaces for centering
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        
        // Print ascending numbers
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        
        // Print descending numbers
        for (int j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }
        
        printf("\n");
    }

    // Lower half of the palindromic pyramid (inverted)
    for (int i = n - 1; i >= 1; i--) {
        // Print leading spaces for centering
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Print ascending numbers
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // Print descending numbers
        for (int j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}
