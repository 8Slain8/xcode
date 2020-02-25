//
//  main.c
//  16.02.2020_coffeeMachine02
//
//  Created by Productivity on 16.02.20.
//  Copyright © 2020 Arion. All rights reserved.
//

#include<stdio.h>
void countNumber(int number);

int main(){
    countNumber(5);
    return 0;
}
void countNumber(int number){
    int b=1;
    int res=0;
    do
    {
        res=res+b;
        b++;
    }while(b<=number);
        printf("%f\n", (float)res/number);
}
