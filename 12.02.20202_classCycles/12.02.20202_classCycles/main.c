//
//  main.c
//  12.02.20202_classCycles
//
//  Created by Productivity on 12.02.20.
//  Copyright © 2020 Arion. All rights reserved.
//

#include <stdio.h>
void printEvenNNumber(int num);

int main(){
  //printEvenNNumber(45);
    
    int a, b, i;
    for(i=0,a=a,b=10;i<11;i++, a++){
        a++;
        b++;
    }
    printf("a = %d, b = %d\n", a, b);
    return 0;
}
void printEvenNNumber(int num){
    if(num%2!=0)
        num = num-1;
    {
        for (num;num>0;num=num-2){
            printf("%d\n",num);
        }
    }
}
