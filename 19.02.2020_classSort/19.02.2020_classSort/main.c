//
//  main.c
//  19.02.2020_classSort
//
//  Created by Productivity on 19.02.20.
//  Copyright © 2020 Arion. All rights reserved.
//

#include <stdio.h>
void printArray(int arr[],int size);
void bubbleSort(int arr[],int size);
void shakerSort(int arr[],int size);
void insertSort(int arr[], int size);
void reverseArr(int arr[],int size);
void reverseArr(int arr[], int size);
int main(){
    int arr[8]={3,7,4,5,8,9,1,2};
    printArray(arr,8);
    //bubbleSort(arr, 8);
    //printArray(arr,8);
    //shakerSort(arr, 8);
    //insertSort(arr, 8);
    reverseArr(arr, 8);
    //printArray(arr, 8);
    return 0;
}

void bubbleSort(int arr[],int size){
    int i,j;
    for(i=0; i<size-1; i++){
        for(j=0;j<size-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

void shakerSort(int arr[],int size){
    int left=0;
    int right=size-1;
    int flag=1;
    while(left<right&&flag>0){
        flag=0;
        for(int i=left; i<right; i++){
            if(arr[i]>arr[i+1]){
                int temp = arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
                flag =1;
            }
        }
        right--;
        for(int i=right; i>left; i--){
            if(arr[i-1]>arr[i]){
                int temp = arr[i];
                arr[i]=arr[i-1];
                arr[i-1]=temp;
                flag =1;
            }
        }
        left ++;
    }
}

void insertSort(int arr[], int size){
    int insertTemp, index, i;
    for(i=1;i<size;i++){
        insertTemp=arr[i];
        index=i-1;
        while(index>=0&&arr[index]>insertTemp){
            arr[index+1]=arr[index];
            index=index-1;
        }
        arr[index+1]=insertTemp;
    }
}

void printArray(int arr[],int size){
    printf("{");
    int i;
    for (i=0;i<size;i++){
        printf("%d",arr[i]);
    }
    if(i<size-1){
        printf(" ,");
    }
    printf("}\n");
}

/*void reverseArr(int arr[],int size){
    int i;
    int arr2[size];
    for(i=size; i>size-1; i--){
        arr[i]=arr2[i];
    }
}
*/
void reverseArr(int arr[], int size){
    int reverseArr[size];
    int i;
    for(i=0; i<size; i++){
        reverseArr[size-1-i] = arr[i];
    }
    printArray(reverseArr, size);
}
