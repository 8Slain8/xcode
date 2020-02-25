//
//  main.c
//  17.02.2020_classArrays
//
//  Created by Productivity on 17.02.20.
//  Copyright © 2020 Arion. All rights reserved.
//

#include <stdio.h>
void fillArray(int size);
void printArray(int arr[], int size);
int findMax(int arr[], int size);
void printArray2(int arr[], int size);

int main(){
    //fillArray(5);
    int array1[]={34,56,78,12,3,10};
    printf("Max in array is: %d\n", findMax(array1,6));
    int array2[]={12,34,24,12,54};
    printArray2(array2,5);
    return 0;
}

void fillArray(int size){
    int arr[size];
    int i;
    for(i=0; i<size; i++){
        printf("Etner value no.%d: ", i);
        fflush(stdout);
        scanf("%d", &arr[i]);
    }
    printf("\nYour array  is: ");
    printArray(arr, size);
}
void printArray(int arr[], int size){
    int i;
    for(i=0; i<size; i++){
        printf("%d ",arr[i]);
    }
}
int findMax(int arr[], int size){
    int i;
    int max = arr[0];
    for(i=0; i<size; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}

void printArray2(int array2[], int size){
    printf("Your array is:{");
    int i;
    for(i=0; i<size; i++){
        printf("%d", array2[i]);
        if(i<size-1){
            printf(", ");
        }
    }
    printf("}\n");
}
