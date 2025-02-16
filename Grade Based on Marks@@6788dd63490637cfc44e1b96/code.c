#include <stdio.h>

int main() {
    int ch;
    scanf("%d", &ch);
    if ((ch >= 90)) {
            printf('A');} 
    else if(90>ch>=80) {
            printf('B');}
    else if (80>ch>=70){printf('C');}
    else if(70>ch>=60) {printf('D');}
    else{printf('F');} 


    return 0;
}