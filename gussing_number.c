#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int r,user_num;
    int count=1;
    srand(time(NULL));
    r=rand()%100;
    printf("\n\t\t\t\t---------------THIS IS GUESSING NUMBER GAME---------------");
    printf("\n\t\t\t\t---------------Hope You Enjoy This---------------\n");
    while(1){
    printf("\n\t\t\t\t Guess the number between (1-100)  :");
    scanf("%d",&user_num);
    if(r==user_num){
        printf("\n\t\t\t\t Congratulation ......You guess the number in %d attempt !!!!!\n",count);
        break;
    }
    else if(r>user_num){
        printf("\n\t\t\t\t1. Higher Number please--!!!\n");
    }
    else{
        printf("\n\t\t\t\t2. Lower Number please---!!!\n");
    }
      count++;
    }

    return 0;
}