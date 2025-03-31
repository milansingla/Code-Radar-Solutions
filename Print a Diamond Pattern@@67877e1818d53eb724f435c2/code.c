#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // Input the number of rows

    // Upper half of the diamond
    for (int i = 1; i <= n; i++) {
        // Print spaces for alignment
        for (int j = i; j < n; j++) {
            printf(" ");
        }

        // Print stars
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }

        printf("\n");
    }

    // Lower half of the diamond
    for (int i = n - 1; i >= 1; i--) {  // Fixed the loop condition
        // Print spaces for alignment
        for (int j = n; j > i; j--) {   // Adjusted spaces
            printf(" ");
        }

        // Print stars
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
