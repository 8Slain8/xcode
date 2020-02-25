//
//  main.c
//  30.01.2020_webinar_1
//
//  Created by Productivity on 30.01.20.
//  Copyright © 2020 Arion. All rights reserved.
//

#include <stdio.h>
void test(int a);

int main(){
    int a=10;
    test(a);
    printf("a in main = %d\n",a);

    
    return 0;
}

void test(int a){
    a=5;
    printf("a in test = %d\n",a);
}


