//
//  main.c
//  24.02.2020_classBinarySearch
//
//  Created by Productivity on 24.02.20.
//  Copyright © 2020 Arion. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
int binarySearch(int arr[], int size, int num);

int main(void){
    int arr[]={1,4,6,8,9,10,12,15,18};
    int size = sizeof arr/sizeof arr[0];
    int res = binarySearch(arr, size, 15);
    (res<0)? printf("no such number found\n"):printf("index number in array is %d\n", res);
    
    return 0;
}

int binarySearch(int arr[], int size, int num){
    int left, right, middle;
    for(left=0,right=size-1;left<=right;){
        middle = (left+right)/2;
        if(arr[middle]==num){
            return middle;
    }if(arr[middle]>num){
        right=middle-1;
    }else{
        left=middle+1;
    }
    }
    return -1;
}
