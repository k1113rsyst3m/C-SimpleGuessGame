#include <stdio.h>
#include <stdlib.h>

int main()
{
    srand(time(NULL));
    int guess_number = rand() % 11; // Случайное загаданное число от 0 до 10
    int user_number; // Ваше число
    int IsGame = 1; // Переменная определяющяя запущена ли игра
    int IsWin = 0; // Переменная определяющяя победил ли игрок
    int command = 0; // Команда, которую вы введёте после победы. 1 - продолжить игру 2 - закончить

    while(IsGame == 1)
    {
       printf("Enter your number: ");
       scanf("%d", &user_number); // отслежевание введёного числа

       if (user_number > guess_number) printf("Your number biggest\n"); // Если ваше число больше загаданного
       if (user_number < guess_number) printf("Your number smallest\n"); // Если ваше число меньше загадонного
       if (user_number == guess_number) // Если числа равно
       {
           // Выводим сообщение о том, что вы выиграли, даём переменной iswin значение 1
           printf("You win! Do you want play again?\n1. Yes\n2. No\n>");
           IsWin = 1;
           scanf("%d", &command); // Отслеживаем комманду
       }
       if((IsWin == 1) && (command == 1))
       {
           // Обнуляем переменные
           guess_number = rand() % 11;
           user_number = -1; // -1 потому что число может быть 0
           IsWin = 0;
           command = 0;
       }
       if((IsWin == 1) && (command == 2))
       {
           IsGame = 0; // Выходим из игры
       }

    } // цикл в котором будут происходить все действия игры
    return 0;
}
