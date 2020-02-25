//
//  main.c
//  12.02.2020_classStars
//
//  Created by Productivity on 12.02.20.
//  Copyright © 2020 Arion. All rights reserved.
//

#include <stdio.h>
void printStars(int starsInRow, int rows);
void printSquare(int stars);
int main(){
    //printStars(50, 15);
    printSquare(6);
    return 0;
}
void printStars(int starsInRow, int rows){
    int i, j;
    for(j=1; j<=rows; j++){
        for(i=1; i<=starsInRow; i++){
            printf("* ");
        }
        printf("\n");
    }
}
void printSquare(int stars){
    int i, j;
    for(j=1; j<=stars; j++){
            for(i = 1; i<=stars; i++){
            if(i==1 || j==1 || i==stars || j==stars){
                printf("* ");
            }else{
                printf("  ");
            }
            }
        printf("\n");
    }
}


