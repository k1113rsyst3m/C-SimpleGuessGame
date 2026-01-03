#include <stdio.h>
#include <stdlib.h>

int main()
{
    srand(time(NULL));
    int guess_number = rand() % 11;
    int user_number; 
    int IsGame = 1;
    int command = 0; 

    while(IsGame == 1)
    {
       printf("Enter your number: ");
       scanf("%d", &user_number);

       if (user_number > guess_number) printf("Your number biggest\n"); 
       if (user_number < guess_number) printf("Your number smallest\n"); 
       if (user_number == guess_number) 
       {
           printf("You win!");
           
       }
       unknow_command:
       printf(" Do you want play again?\n1. Yes\n2. No\n>");
       scanf("%d", &command);
       
       if(command == 1)
       {
           
           guess_number = rand() % 11;
           user_number = -1; 
           IsWin = 0;
           command = 0;
       }
       if(command == 2)
       {
           IsGame = 0; 
       }
       else {
           goto unknow_command;
       }
    } 
    return 0;
}


