//
//  main.c
//  presentation
//
//  Created by Productivity on 22.01.20.
//  Copyright © 2020 Arion. All rights reserved.
//

#include <stdio.h>

void f1();
void f2();

int main(){
    f1();
    return 0;
}

void f1(){
    printf("My name is Arion\n");
    f2();
    return;
}

void f2(){
    printf("I live in Berlin\n");
    return;
}
