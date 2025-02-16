#include <stdio.h>
int main()
{
    int a,b;char c;
    scanf("%d %d %c",&a,&b,&c);
    if(c=='+'){printf("%d",a+b);}
    else if(c=='-'){printf("%d",a-b);}
   else  if(c=='/'){if (b == 0) {
            printf("Error: Division by zero is not allowed\n");
        } else {
            printf("Result: %.2f\n", (float)a / b);
        }}
    else if(c=='*'){printf("%d",a*b);}
    else{printf("Invalid Operator");}
    return 0;
}
   