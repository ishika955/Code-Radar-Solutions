
#include <stdio.h>

int main() {
    int n ;  // Height of the pyramid (number of rows)

   scanf("%d",n);
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

    

    return 0;
}
