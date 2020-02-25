//
//  main.c
//  27.01.2020_classwork_2
//
//  Created by Productivity on 27.01.20.
//  Copyright © 2020 Arion. All rights reserved.
//

#include <stdio.h>

int main(){
    int a;
    printf("type in a number\n");
    fflush(stdout);
    scanf("%d", &a);
    if(a>5){
        printf("%d > 5\n", a);
        
    } else if (a<5){
        printf("%d <5\n", a);
    } else {
        printf("%d = 5", a);
    }
        
        
    
    
    return 0;
}
