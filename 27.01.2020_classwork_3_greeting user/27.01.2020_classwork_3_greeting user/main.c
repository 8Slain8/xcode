//
//  main.c
//  27.01.2020_classwork_3_greeting user
//
//  Created by Productivity on 27.01.20.
//  Copyright © 2020 Arion. All rights reserved.
//

#include <stdio.h>

int main(){
    char answer;
    printf("Do you want me to salute you?(y/n)\n");
    scanf("%c", &answer);
    if(answer=='y'){
        printf("Hello username\n");
    }else if(answer=='n'){
        printf("Go fuck yourself, fucktard\n");
    }else{
        printf("Suck it, then, idiot.\n");
    }
    
    
    
    return 0;
}
