//
//  main.c
//  29.01.2020_classwork_3
//
//  Created by Productivity on 29.01.20.
//  Copyright © 2020 Arion. All rights reserved.
//

#include <stdio.h>
void print_greatest(int a, int b, int c);
int greatest_number(int a, int b, int c);

int main(){
    print_greatest(5,12,4);
    return 0;
}

void print_greatest(int a, int b, int c){
    printf("The greatest number of %d, %d, %d is %d\n", a,b,c,greatest_number(a,b,c));
}

int greatest_number(int a, int b, int c){
    int greatest;
    if(a>b){
        if(a>c){
            greatest = a;
        }else{
            greatest = c;
        }
    }else{
        if(b>c){
            greatest = b;
        }else{
            greatest = c;
        }
    }
    
    return greatest;
}
