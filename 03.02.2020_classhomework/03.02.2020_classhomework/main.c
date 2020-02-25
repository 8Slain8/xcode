//
//  main.c
//  03.02.2020_classhomework
//
//  Created by Productivity on 03.02.20.
//  Copyright © 2020 Arion. All rights reserved.
//

#include <stdio.h>
void printEvenCheck(int a);
int isNumberEven(int a);
void isNumberInTheRange(int a);
float average(int num1,int num2,int num3);

int main(){
    printEvenCheck(5);
    isNumberInTheRange(101);
    int num1 =2, num2 =5, num3 =6;
    float res = average(num1, num2, num3);
    printf("%f\n", res);
    printf("%f\n", average(4,7,12));
    return 0;
}

int isNumberEven(int a){
    if(a%2 == 0){
        return 0;
    }else{
        return 1;
    }
}

void printEvenCheck(int a){
    (isNumberEven(a)==0)? printf("%d is even\n", a):printf("%d is odd\n", a);
}

void isNumberInTheRange(int a){
    if (a>=0&&a<=100){
        printf("yes\n");
    }else{
        printf("no\n");
    }
    (a>=0&&a<=100)? printf("y/n\n"):printf("n/n\n");
}

float average(int num1,int num2,int num3){
    return (float)(num1 + num2 + num3)/3;
    
}
