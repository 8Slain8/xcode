//
//  main.c
//  20.02.2020_classhomework
//
//  Created by Productivity on 10.02.20.
//  Copyright © 2020 Arion. All rights reserved.
//

#include <stdio.h>
void latte(void);
void americano(void);
void espresso(void);
void cappuccino(void);
void addCoffee(int quantity);
void addWater(int quantity);
void addMilk(int quantity);
void coffeeMachine(int choice);
int main2(void);

int main(void){
    coffeeMachine(1);
    main2();
    return 0;
}

void coffeeMachine(int choice){
    switch (choice){
        case 1:
            latte();
            break;
        case 2:
            americano();
            break;
        case 3:
            espresso();
            break;
        case 4:
            cappuccino();
            break;
        default:
            printf("Error, no such coffee\n");
    }
}

void latte(){
    printf("you have chosen latte\n");
    addCoffee(5);
    addMilk(200);
    printf("your latte is ready\n");
}
void americano(){
    printf("you have chosen americano\n");
    addCoffee(8);
    addWater(200);
    printf("your americano is ready\n");
}
void espresso(){
    printf("you have chosen espresso\n");
    addCoffee(8);
    addWater(20);
    printf("your espresso is ready\n");
}
void cappuccino(){
    printf("you have chosen cappucino\n");
    addCoffee(8);
    addMilk(180);
    addWater(20);
    printf("your  cappuccino is ready\n");
}
void addCoffee(int quantity){
    printf("adding %d gr coffee\n", quantity);
}
void addWater(int quantity){
    printf("adding %d ml water\n", quantity);
}
void addMilk(int quantity){
    printf("adding %d ml milk\n", quantity);
}

//homework 2//
int countNumber1(int num);
int countNumber2(int num);
int countNumber3(int num);
int main2(void){
    printf("%d\n", countNumber1(0));
    printf("%d\n", countNumber2(0));
    printf("%d\n", countNumber3(0));
    return 0;
}

int countNumber1(int num){
    int res = 0;
    if(num==0) return 1;
    do{
        printf("res: %d\n", res);
        num = num/10;
        res++;
    }while(num!=0);
    return res;
}
int countNumber2(int num){
    int res = (num==0)? 1 : 0;
    while(num!=0){
        num = num/10;
        res++;
    }
    return res;
}
int countNumber3(int num){
    int res = 1;
    int i;
    for(i=1; i<num; i++){
        num = num/10;
        res++;
    }
    return res;
}
