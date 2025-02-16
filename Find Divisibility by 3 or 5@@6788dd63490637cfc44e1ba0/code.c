#include <stdio.h>

int main() {
    int c;
    scanf("%d", &c);
    if ((c%3==0&&c%5==0)) {printf("Divisible by Both");} 
    else if(c%3==0) { printf("Divisible by 3");}
    else if (c%5==0){printf("Divisible by 5");}
    else{printf("Not Divisible");} 


    return 0;
}