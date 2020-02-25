//
//  main.c
//  17.02.2020_classReplaceCharArr
//
//  Created by Productivity on 17.02.20.
//  Copyright © 2020 Arion. All rights reserved.
//

#include <stdio.h>
void changeNumber(int arr[], int size);
void replaceChar(char chars[], int size);

int main(){
    int array[]={1,0,5,7,8,9,1,2,5};
    changeNumber(array,9);
    char privet[]="Privet MedvEd";
    replaceChar(privet, 13);
    return 0;
}

void changeNumber(int arr[], int size){
    int i;
    for(i=0; i<size; i++){
        if(arr[i]==1){
            arr[i]=0;
        }
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void replaceChar(char chars[], int size){
    int i;
    for(i=0; i<size; i++){
        if(chars[i]=='e' || chars[i]=='E'){
            chars[i]=' ';
        }
        printf("%c", chars[i]);
    }
    printf("\n");
}
