//
//  main.c
//  03.02.2020_homework
//
//  Created by Productivity on 03.02.20.
//  Copyright © 2020 Arion. All rights reserved.
//

#include <stdio.h>
int main()
{
  
    int num;
 
    printf("Enter an integer number: ");
    scanf("%d",&num);
 
    if(num%2==0)
        printf("%d is an EVEN number.\n",num);
    else
        printf("%d is an ODD number.\n",num);
 
    return 0;
}
