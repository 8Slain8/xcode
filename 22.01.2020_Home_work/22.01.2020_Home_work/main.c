//
//  main.c
//  22.01.2020_Home_work
//
//  Created by Productivity on 22.01.20.
//  Copyright © 2020 Arion. All rights reserved.
//

#include <stdio.h>

int main() {
    printf("|500|\n");
    printf("|%10d|\n", 500);
    printf("|%-10d|\n", 500);
    
    printf("Words:%12d\n", 59);
    printf("Letters:%10d\n", 1004);
    printf("Digits:11d\n", 8);
    printf("\n");
    
    char c = 63;
    unsigned char cha = 'r';
    short j = 'b', k = 99;
    
    printf("%c == %d\n", c, c);
    printf("%c, %d\n", cha, cha);
    printf("%c, %c\n", j, k);
    
    int a = 10;
    printf("a is %d\n", a);
    printf("adress a is %p\n", &a);
    
    
    return 0;
}
