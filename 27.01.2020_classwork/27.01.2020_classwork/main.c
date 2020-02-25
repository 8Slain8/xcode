//
//  main.c
//  27.01.2020_classwork
//
//  Created by Productivity on 27.01.20.
//  Copyright © 2020 Arion. All rights reserved.
//

#include <stdio.h>
int main(){
    int number;
    printf("Enter your number, asshole\n");
    fflush(stdout);
    scanf("%d", &number);
    printf("we doubled your number: %d\n", number*2);
    
    int a = 10;
    int b = 15;
    a = (a>b)?b:a;
    printf("%d\n", a);
    
    printf("%s\n", (1>0)? "true" : "false");
    
    
    return 0;
}
