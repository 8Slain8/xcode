//
//  main.c
//  calc test
//
//  Created by Productivity on 23.01.20.
//  Copyright © 2020 Arion. All rights reserved.
//

 #include <stdio.h>

 int main()
 {
     char Operator;
     double a, b;
     
     printf("Enter an operator (+, -, *, /): ");
     scanf("%c", &Operator);
     printf("Enter number 1: ");
     scanf("%lf", &a);
     printf("Enter number 2: ");
     scanf("%lf", &b);
     
     float sum1 = a+b;
     float sum2 = a-b;
     float sum3 = a*b;
     float sum4 = a/b;
     
     switch(Operator)
     {
         case '+':
             printf("Addition = %.1lf\n", sum1);
             break;
         case '-':
             printf("Subtraction = %.1lf\n", sum2);
             break;
         case '*':
             printf("Multiplication = %.1lf\n", sum3);
             break;
         case '/':
             printf("Division = %.1lf\n", sum4);
             break;
         default:
             printf("Error! Operator is not correct");
     }

     return 0;
 }
