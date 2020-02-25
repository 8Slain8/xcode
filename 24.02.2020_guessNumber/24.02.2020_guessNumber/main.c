//
//  main.c
//  24.02.2020_guessNumber
//
//  Created by Productivity on 24.02.20.
//  Copyright © 2020 Arion. All rights reserved.
//

#include <stdio.h>
void guessNumber(void);

int main(){
    guessNumber();
    
    return 0;
}

void guessNumber(void){
    int playGame=1;
    int min,max;
    char playGameAnswer;
    while(playGame==1){
        printf("please enter min possible number:\n");
        fflush(stdout);
        scanf("%d", &min);
        printf("please enter max possible number:\n");
        fflush(stdout);
        scanf("%d", &max);
        
        int candidate;
        char answer;
        printf("Please guess the number from %d to %d:\n",min,max);
        candidate=(min+max)/2;
        while(min!=max){
            printf("is the number more than %d (y/n)?\n", candidate);
            fflush(stdout);
            scanf(" %c", &answer);
            if(answer=='y'){
                min=candidate + 1;
            }else{
                max=candidate;
            }
            candidate = (min+max)/2;
        }
        printf("your number is %d\n", min);
        printf("do you want to play again?(y/n)\n");
        fflush(stdout);
        scanf(" %c", &playGameAnswer);
        if (playGameAnswer!='y'){
            playGame = 0;
        }
    }
}
