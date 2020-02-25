//
//  main.c
//  27.01.2020_classwork_3_calculator
//
//  Created by Productivity on 27.01.20.
//  Copyright © 2020 Arion. All rights reserved.
//

#include <stdio.h>
float calc(float a, float b, int oper);

int main(){
    float a;
    printf("type 1st number\n");
    scanf("%f", &a);
    float b;
    printf("type 2nd number\n");
    scanf("%f", &b);
    int c;
    printf("enter desired operation\n");
    printf("1 - sum\n");
    printf("2 - sub\n");
    printf("3 - mult\n");
    printf("4 - div\n");
    fflush(stdout);
    scanf("%d", &c);
    float res1 = calc(a,b,c);
    printf("Result: %.2f\n", res1);
    return 0;
}

float calc(float a, float b, int oper){
    float res = 0;
    if(oper==1){
        return a+b;
    }
    if(oper==2){
        return a-b;
    }
    if(oper==3){
        return a*b;
    }
    if(oper==4){
        if(b==0){
            printf("don't divide on 0\n");
           
        }
        return a/b;
    }
    if(oper<1 || oper>4){
        printf("error: wrong operation");
    }
    return res;
}
