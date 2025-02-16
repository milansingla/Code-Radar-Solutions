#include <stdio.h>

int main() {
    int a,b,ch;
    scanf("%d %d %d",&a,&b,&c);
    if ((a==b==c)) {printf("Equilateral");} 
    else if(a==b||b==c||a==c) { printf("Iaosceles");}
    else{printf("Scalene");} 


    return 0;
}