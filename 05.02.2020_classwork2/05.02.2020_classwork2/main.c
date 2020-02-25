//
//  main.c
//  05.02.2020_classwork2
//
//  Created by Productivity on 05.02.20.
//  Copyright © 2020 Arion. All rights reserved.
//

#include <stdio.h>
int sumNumber(int number);
void sumNumber2(int number);
void gagarin(int num);
int stupidSum(int num2);
int main(){
    
    printf("%d\n", sumNumber(9));
    sumNumber2(200);
   
    int i;
    for (i=100; i>0; i/=2){
        printf("i is %d\n", i);
    }
    gagarin(10);
    printf("%d\n", stupidSum(2349087));
    
    return 0;
}

int sumNumber(int number)
{
    int i = 1;
    int res = 0;
    while(i<=number){
        res = res + i;
        i++;
    }
    return res;
}

void sumNumber2(int number)
{
    int i;
    int res = 0;
    for(i=1; i<=number; i++){
        res = res+i;
        printf("step %d sum is %d\n", i, res);
        
    }
}

void gagarin(int num)

{
    printf("sei4as poedem\n");
    int i = 0;
    while(num>=i){
        printf("%d\n", num);
        num--;
    }
    printf("Poehali\n");
}
int stupidSum(int num2)
{
    int sum = 0;
    while(num2!=0){
        sum = sum + num2%10;
        num2 = num2/10;
        printf("number is %d\n", num2);
    }
    return sum;
}
