#include <stdio.h>

int main() {
    int c;
    scanf("%d", &c);
    if ((c<2)) {if (c % 2 == 0 || c % 3 == 0 || c % 5 == 0 || c % 7 == 0 || c % 11 == 0 || c % 13 == 0) 
        printf("Not Prime\n");} 
    else{printf("Prime");} 


    return 0;
}