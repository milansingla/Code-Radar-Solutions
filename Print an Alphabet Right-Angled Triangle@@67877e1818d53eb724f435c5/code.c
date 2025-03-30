#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // Input the number of rows

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            printf("%c ", 'A' + j);  // Print alphabets starting from 'A'
        }
        printf("\n");  // Move to the next line
    }

    return 0;
}

