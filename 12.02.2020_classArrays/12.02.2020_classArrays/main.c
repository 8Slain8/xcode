//
//  main.c
//  12.02.2020_classArrays
//
//  Created by Productivity on 12.02.20.
//  Copyright © 2020 Arion. All rights reserved.
//

#include <stdio.h>
void  printArray(int arr[], int size);

int main(){
    
    int size=5;
    int array[size];
    array[0]=1;
    array[1]=4;
    
    int array1[]= {3,5,6,7,8};
    int array2[10]={6,7,12};
    int array3[5]={};
    
    printArray(array, size);
    printf("\n");
    printArray(array1, 15);
    printf("\n");
    printArray(array2, 10);
    printf("\n");
    printArray(array3, 6);
    return 0;
}
void  printArray(int arr[], int size){
    int i;
    for(i=0; i<size; i++){
        printf("arr[%d] = %d\n", i, arr[i]);
    }
}
