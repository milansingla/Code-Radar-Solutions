#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // Input the size of the square (n x n)

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            // Print '*' for the borders (first/last row or column)
            if (i == 1 || i == n || j == 1 || j == n) {
                printf("*");
            } else {
                printf(" ");  // Hollow part
            }
        }
        printf("\n");  // Move to the next line
    }

    return 0;
}
