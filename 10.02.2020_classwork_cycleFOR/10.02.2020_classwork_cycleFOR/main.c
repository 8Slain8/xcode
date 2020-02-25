//
//  main.c
//  10.02.2020_classwork_cycleFOR
//
//  Created by Productivity on 10.02.20.
//  Copyright © 2020 Arion. All rights reserved.
//

#include <stdio.h>
void printHello (int num);
void printHello2 (int num);

int main(){
    printHello(5);
    return 0;
}
void printHello (int num){
    int i;
    for (i=1; i<=num; i++){
        printf("%d Hello!\n", i);
    }
}
void printHello2 (int num){
    int i = 0;
    while(i<num){
        i++;
        printf("%d Hello\n", i);
    }
}
void printHello3 (int num){
    while(num!=0){
        printf("%d hello!\n", num);
        num--;
    }
}
