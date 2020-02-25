//
//  main.c
//  Calculator
//
//  Created by Productivity on 23.01.20.
//  Copyright © 2020 Arion. All rights reserved.
//


#include <stdio.h>
int main()
{
    float num1;
    double num2;
   
    printf("Enter a number: ");
    scanf("%f", &num1);
    printf("Enter another number: ");
    scanf("%lf", &num2);
    printf("num1 = %f\n", num1);
    printf("num2 = %lf\n", num2);
    float sum = (num1+num2);
    printf("sum = %f\n", sum);
    
    
    return 0;
}
