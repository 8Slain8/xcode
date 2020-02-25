//
//  main.c
//  29.01.2020_classwork_2
//
//  Created by Productivity on 29.01.20.
//  Copyright © 2020 Arion. All rights reserved.
//

#include <stdio.h>
float median(int n1, int n2);

int main(){
    int num1 = 10;
    int num2 = 13;
    float resolution;
    printf("%.2f\n", median(num1,num2));
    resolution = median(124, 315);
    printf("%.2f\n", resolution);
    resolution = median(1244, 345);
    printf("%.2f\n", resolution);
    return 0;
}

float median(int n1, int n2){
    float res;
    res = (float)(n1+n2)/2;
    return res;
}
