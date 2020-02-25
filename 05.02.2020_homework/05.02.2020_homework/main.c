//
//  main.c
//  05.02.2020_homework
//
//  Created by Productivity on 05.02.20.
//  Copyright © 2020 Arion. All rights reserved.
//

#include <stdio.h>
int getCoffeeAmt(int drink);
int getMilkAmt(int drink);
int getWaterAmt(int drink);
void selectedDrink(int drink, int getWaterAmt, int getMilkAmt, int getCoffeeAmt);

int main()
{
    int drink;

    printf("Please choose a desired drink\n 1 - Espresso\n 2 - Cappuccino\n 3 - Americano\n 4 - Latte macchiato\n 5 - Milk\n");
    scanf("%d", &drink);
    selectedDrink(drink, getWaterAmt(drink), getMilkAmt(drink), getCoffeeAmt(drink));
    
    return 0;
}

int getCoffeeAmt(int drink){
    switch(drink)
    {
        case 1:
        return 7;
        break;
        case 2:
        return 7;
        break;
        case 3:
        return 7;
        break;
        case 4:
        return 4;
        break;
        case 5:
        return 0;
        break;
        default:
        return -1;
    }
    return 0;
}
int getMilkAmt(int drink)
{
    switch(drink)
    {
        case 1:
        return 0;
        break;
        case 2:
        return 150;
        break;
        case 3:
        return 0;
        break;
        case 4:
        return 150;
        break;
        case 5:
        return 195;
    }
    return 0;
}
int getWaterAmt(int drink)
{
    switch(drink)
    {
        case 1:
        return 44;
        break;
        case 2:
        return 44;
        break;
        case 3:
        return 200;
        break;
        case 4:
        return 0;
        break;
        case 5:
        return 0;
    }
    return 0;
}
void selectedDrink(int drink, int getWaterAmt, int getMilkAmt, int getCoffeeAmt)
{
    switch(drink){
        case 1:
            printf("You have selected Espresso\n");
            break;
        
        case 2:
            printf("You have selected Cappuccino\n");
            break;
        
        case 3:
            printf("You have selected Americano\n");
            break;
        
        case 4:
            printf("You have selected Latte macchiato\n");
            break;
        
        case 5:
            printf("You have selected Milk\n");
            break;
        
        default: printf("Wrong operation\n");
    }
    printf("Ingredients used:\n");
    printf("Coffee amount %d gr\n", getCoffeeAmt);
    printf("Water amount is %d ml\n", getWaterAmt);
    printf("Milk amount is %d ml\n", getMilkAmt);
}
