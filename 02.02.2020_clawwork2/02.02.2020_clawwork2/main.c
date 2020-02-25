//
//  main.c
//  02.02.2020_clawwork2
//
//  Created by Productivity on 05.02.20.
//  Copyright © 2020 Arion. All rights reserved.
//

#include <stdio.h>
void isTheNumberSimple(int number);
int main(){
    int number;
    printf("enter the number\n");
    scanf("%d", &number);
    isTheNumberSimple(number);
    return 0;
}
void isTheNumberSimple(int number)
{
    int i = 1;
    int d = 0;
    while(i<=number){
        if(number%i++ ==0){
            d++;
        }else
            continue;
        if(d==3) break;
    }
    printf("number %d is %sprime number\n", number, (d==2)? " " : "not ");
}
