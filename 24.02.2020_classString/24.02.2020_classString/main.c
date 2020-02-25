//
//  main.c
//  24.02.2020_classString
//
//  Created by Productivity on 24.02.20.
//  Copyright © 2020 Arion. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* sayHello(void);
char* sayHelloTo(char* name);

int main(void){
    char name[20];
    gets(name);
    //puts(name);
    puts(sayHelloTo(name));
    char string[100]="this is a string";
    printf("%s\n", string);
    char* string2="this is also a string";
    printf("%s\n", string2);
    string[5]='X';
    printf("%s\n", string);
    puts(sayHello());
    printf("%s\n", sayHello());
    sayHelloTo(name);
    return 0;
}
char* sayHello(void){
    return "Hello!\n";
}

char* sayHelloTo(char* name){
    char welcome[256]="Hello, ";
    if(strcmp("Lena", name)==0){
        strcpy(name, "Master!");
    }
    return strcat(welcome, name);
}
