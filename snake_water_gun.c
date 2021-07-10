#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//C language have no bool data type so  return value in 1's and 0's form int data type!!
int  comparision(char comp, char user_choice)
{
    if (comp == user_choice)
        return 0;

    else if (comp == 's')
    {
        if (user_choice == 'w')
            return -1;
        else if (user_choice == 'g')
            return 1;
    }
    else if (comp == 'w')
    {
        if (user_choice == 's')
            return 1;
        else if (user_choice == 'g')
            return -1;
    }
    if (comp == 'g')
    {
        if (user_choice == 'w')
            return 1;
        else if (user_choice == 's')
            return -1;
    }
}
int main()
{

    char comp;
    char user_choice;
    int comp_choice;

    printf("\n\t\t\t\t Computer Turn : snake(s),gun(g) and water(w)\n");
    srand(time(0));
    comp_choice=rand()%100+1;
    //  printf("%d",comp_choice); //just checking whether the random number generating or not !!
    if (comp_choice < 33)
    {
        comp ='s';
    }
    else if(comp_choice>33 && comp_choice<66)
    {
        comp ='w';
    }
    else
    {
        comp ='g';
    }
// printf("%c",comp);  //just checking whether the random character generating or not !!
    printf("\n\t\t\t\tYour Turn : snake(s), gun(g) and water(w) :");
    scanf("%c",&user_choice);

    int result = comparision(comp, user_choice);

    if (result == 0)
    {
        printf("\t\t\t\t--------------------------------------------------------------");
        printf("\n\t\t\t\tMatch Tie : Both you and computer chose same event\n");
        printf("\t\t\t\t--------------------------------------------------------------");
    }
    else if (result == 1)
    {
        printf("\t\t\t\t--------------------------------------------------------------");
        printf("\n\t\t\t\tHurrey YOU Win The Match\n\t\t\t\tEnjoy your day!!!\n");
        printf("\t\t\t\t--------------------------------------------------------------");
    }
    else if (result == -1)
    {
        printf("\t\t\t\t--------------------------------------------------------------");
        printf("\n\t\t\t\tOhh No !! You Lose The Match \n\t\t\t\t    Try Next Time \n\t\t\t\t   Good Day!!\n");
        printf("\t\t\t\t--------------------------------------------------------------");
    }
    return 0;
}