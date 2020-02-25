#include <stdio.h>

int main(){
    
    float a;
    float b;
    float result;
    char ch;
    
    printf("Enter number 1: ");
    scanf("%f", &a);
    printf("Enter number 2: ");
    scanf("%f", &b);
    printf("Enter an operator (+, -, *, /): \n");
    scanf("%c", &ch);
    
    switch(ch)
    {
        case '+':
            printf("%.2f + %.2f = %.2f\n", a, b, a+b);
            break;
        case '-':
            printf("%.2f - %.2f = %.2f\n", a, b, a-b);
            break;
        case '*':
            printf("%.2f * %.2f = %.2f\n", a, b, a*b);
            break;
        case '/':
            printf("%.2f / %.2f = %.2f\n", a, b, a/b);
            break;
        default:
            printf("Error! Operator is not correct\n");
    }
    result = 0;
    printf("Result: %f %c %f = %f\n",a,ch,b,result);
    return 0;
}
