//
//  main.c
//  10.02.2020_classwork_2
//
//  Created by Productivity on 10.02.20.
//  Copyright © 2020 Arion. All rights reserved.
//

#include <stdio.h>
void printStart(int num, int row);
int main(){
    printStart(22, 5);
    return 0;
}
void printStart(int num, int row){
    int i=1, j=1;
    while(i<= num){
        if(j<row){
            printf("*");
            j++;
        }else{
            printf("*\n");
            j=1;
        }
        i++;
    }
}
