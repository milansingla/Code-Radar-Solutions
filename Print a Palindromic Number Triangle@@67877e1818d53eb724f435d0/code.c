#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // Input the number of rows

    for (int i = 1; i <= n; i++) {
        // Print spaces for alignment
        for (int j = n; j > i; j--) {
            printf(" ");
        }
        
        // Print increasing numbers
        for (int k = 1; k <= i; k++) {
            printf("%d", k);
        }
        
        // Print decreasing numbers
        for (int l = i - 1; l >= 1; l--) {
            printf("%d", l);
        }
        
        printf("\n");  // Move to the next line
    }

    return 0;
}
