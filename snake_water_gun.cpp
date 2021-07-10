#include <iostream>
#include <time.h>

using namespace std;
//C ++ language have  bool data type so  return value in true and false;
int comparision(char comp, char user_choice)
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

    return 0; //warning: control reaches end of non-void function  (so i have to add this to non void function)
}

int main()
{

    char comp;
    char user_choice;
    int comp_choice;

    cout << "\n\t\t\t\t Computer Turn : snake(s),gun(g) and water(w)\n"
         << endl;

    srand(time(0));
    comp_choice = rand() % 100 + 1;
    // cout << comp_choice;
    if (comp_choice < 33)
    {
        comp = 's';
    }
    else if (comp_choice > 33 && comp_choice < 66)
    {
        comp = 'w';
    }
    else
    {
        comp = 'g';
    }

    // cout << comp;
    cout << "\n\t\t\t\tYour Turn : snake(s), gun(g) and water(w) :";
    cin >> user_choice;

    int result = comparision(comp, user_choice);

    if (result == 0)
    {
        cout << "\t\t\t\t--------------------------------------------------------------" << endl;
        cout << "\n\t\t\t\tMatch Tie : Both you and computer chose same event\n" << endl;
        cout << "\t\t\t\t--------------------------------------------------------------" << endl;
    }
    else if (result == 1)
    {
        cout << "\t\t\t\t--------------------------------------------------------------" << endl;
        cout << "\n\t\t\t\tHurrey YOU Win The Match\n\t\t\t\tEnjoy your day!!!\n"
             << endl;
        cout << "\t\t\t\t--------------------------------------------------------------" << endl;
    }
    else if (result == -1)
    {
        cout << "\t\t\t\t--------------------------------------------------------------" << endl;
        cout << "\n\t\t\t\tOhh No !! You Lose The Match \n\t\t\t\t    Try Next Time \n\t\t\t\t   Good Day!!\n"
             << endl;
        cout << "\t\t\t\t--------------------------------------------------------------" << endl;
    }
    return 0;
}