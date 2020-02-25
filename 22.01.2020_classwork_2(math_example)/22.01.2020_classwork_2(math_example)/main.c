//
//  main.c
//  22.01.2020_classwork_2(math_example)
//
//  Created by Productivity on 22.01.20.
//  Copyright © 2020 Arion. All rights reserved.
//

#include <stdio.h>

int sum(int a, int b);
int power2(int a);
int power3(int a);

int main(){
    int res = sum(10,12);
    
    int a = 10;
    printf("sum is %d\n", res);
    res = power2(a);
    printf("square is %d\n", res);
    res = power3(a);
    printf("cube is %d\n", res);
    
    return 0;
}
int sum(int a, int b){
    return a+b;
}

int power2(int a){
    return a*a;
}

int power3(int a){
    return power2(a)*a;
}
