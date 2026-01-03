#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#define MAX_GUESS_NUM 11

int main()
{
    srand(time(NULL));
    int guess_number = rand() % MAX_GUESS_NUM;
    int user_number = 0; 
    bool IsGame = true; 

    while(IsGame)
    {
       int command = 0;
       printf("Enter your number: ");
       scanf("%d", &user_number);

       if (user_number > guess_number) {
	       printf("Your number biggest\n");
	       continue;
       }
       if (user_number < guess_number) {
	       printf("Your number smallest\n");
	       continue;
       }
       if (user_number == guess_number) 
       {
           printf("You win! ");
           
       }
       unknow_command:
       printf("Do you want play again?\n1. Yes\n2. No\n> ");
       scanf("%d", &command);
       
       printf("command: %d\n", command);

       if(command == 1)
       {
           guess_number = rand() % 11;
           user_number = -1; 
           command = 0;
       }
       else if(command == 2)
       {
           IsGame = false; 
       }
       else {
	   printf("Unknown command.\n");
	   command = 0;
           goto unknow_command;
       }
    } 
    return 0;
}


