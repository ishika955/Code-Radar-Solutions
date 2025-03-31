#include <stdio.h>

int main() {
    int n;  // Number of terms in the Fibonacci sequence

    // Take input for the number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // First two Fibonacci numbers
    int a = 0, b = 1;

    // Print the Fibonacci sequence up to n terms
    printf("Fibonacci Sequence: ");
    for (int i = 1; i <= n; i++) {
        printf("%d ", a);

        // Update a and b for the next Fibonacci number
        int next = a + b;
        a = b;
        b = next;
    }

    printf("\n");
    return 0;
}

