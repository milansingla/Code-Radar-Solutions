#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);  // Input the number of rows

    for (int i = 1; i <= n; i++) {
            printf("*");
        
        
        printf("\n");  // Move to the next line
    }

    return 0;
}