//
//  main.c
//  12.02.2020_classArrays2
//
//  Created by Productivity on 12.02.20.
//  Copyright © 2020 Arion. All rights reserved.
//

#include <stdio.h>
void pow2(int num);
void pow2array(int arr[]);

int main(){
    int num = 10;
    printf("%p", &num);
//    printf("value in main beofre pow2 %d\n", num);
//    pow2(num);
//    printf("value in main after pow2 %d\n", num);
    printf("\n");
    int arr[] = {10,20};
//    printf("num in array be4 pow2array %d\n", arr[0]);
//    pow2array(arr);
//    printf("num in array after pow2array %d\n", arr[0]);
    printf("%p\n", arr);
    printf("%p\n", &arr[0]);
    printf("%p\n", &arr[1]);
    return 0;
}

void pow2(int num){
    num = num*num;
    printf("value in pow2 %d\n", num);
}
void pow2array(int arr[]){
    arr[0] = arr[0]*arr[0];
    printf("Value in pow2array %d\n", arr[0]);
}
