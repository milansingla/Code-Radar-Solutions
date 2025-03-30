#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // Input the number of rows

    for (int i = n; i >= 1; i--) {  // Start from n and decrease
        for (int j = 1; j <= i; j++) {  // Print i asterisks
            printf("*");
        }
        printf("\n");  // Move to the next line after each row
    }

    return 0;
}
