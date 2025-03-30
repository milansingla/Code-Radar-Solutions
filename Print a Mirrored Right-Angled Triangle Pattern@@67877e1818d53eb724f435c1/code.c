#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // Input the number of rows

    for (int i = 1; i <= n; i++) {
        // Print spaces to shift the triangle to the right
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        
        // Print stars
        for (int k = 1; k <= i; k++) {
            printf("*");
        }
        
        printf("\n");  // Move to the next line
    }

    return 0;
}
