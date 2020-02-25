//
//  main.c
//  17.02.2020_classMultTable
//
//  Created by Productivity on 17.02.20.
//  Copyright © 2020 Arion. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

void printPifagor();
void printPifagorArray ();

int main(){
   // printPifagor();
    printPifagorArray();
    return 0;
}

void printPifagor(){
    int i,j;
    for(i=1; i<=30; i++){
        for(j=1; j<=30; j++){
            int res = i*j;
            printf("%d\t", res);
        }
        printf("\n");
    }
}
void printPifagorArray (){
    int rows = 10, columns = 10;
    int table [rows][columns];
    int i, j;
    for(i=0; i<rows; i++){
        for(j=0; j<columns; j++){
            table[i][j]=(i+1)*(j+1);
        }
    }
    for(i=0; i<rows; i++){
        for(j=0; j<columns; j++){
            printf("%7d", table[i][j]);
        }
        printf("\n");
    }
}

