#include<iostream>
#include<time.h>
using namespace std;
int main(){
    int r,user_choice;
    int count;
    srand(time(NULL));
    r= rand()%100;
    cout<<"\n\t\t\t\t---------------THIS IS GUESSING NUMBER GAME---------------"<<endl;
    cout<<"\n\t\t\t\t---------------Hope You Enjoy This---------------\n"<<endl;
    while(1){
    cout<<"\n\t\t\t\t Guess the number between (1-100)  :";
    cin>>user_choice;
    if(r==user_choice){
        cout<<"\n\t\t\t\t Congratulation ......You guess the number in %d attempt !!!!!"<<count<<endl;
        break;
    }
    else if(r>user_choice){
        cout<<"\n\t\t\t\t1. Higher Number please--!!!\n"<<endl;
    }
    else{
        cout<<"\n\t\t\t\t2. Lower Number please---!!!\n"<<endl;
    }
      count++;
    }
    return 0;
}