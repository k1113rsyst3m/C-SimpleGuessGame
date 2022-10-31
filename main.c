#include <stdio.h>
#include <stdlib.h>

int main()
{
    srand(time(NULL));
    int guess_number = rand() % 11; // ��������� ���������� ����� �� 0 �� 10
    int user_number; // ���� �����
    int IsGame = 1; // ���������� ������������ �������� �� ����
    int IsWin = 0; // ���������� ������������ ������� �� �����
    int command = 0; // �������, ������� �� ������ ����� ������. 1 - ���������� ���� 2 - ���������

    while(IsGame == 1)
    {
       printf("Enter your number: ");
       scanf("%d", &user_number); // ������������ �������� �����

       if (user_number > guess_number) printf("Your number biggest\n"); // ���� ���� ����� ������ �����������
       if (user_number < guess_number) printf("Your number smallest\n"); // ���� ���� ����� ������ �����������
       if (user_number == guess_number) // ���� ����� �����
       {
           // ������� ��������� � ���, ��� �� ��������, ��� ���������� iswin �������� 1
           printf("You win! Do you want play again?\n1. Yes\n2. No\n>");
           IsWin = 1;
           scanf("%d", &command); // ����������� ��������
       }
       if((IsWin == 1) && (command == 1))
       {
           // �������� ����������
           guess_number = rand() % 11;
           user_number = -1; // -1 ������ ��� ����� ����� ���� 0
           IsWin = 0;
           command = 0;
       }
       if((IsWin == 1) && (command == 2))
       {
           IsGame = 0; // ������� �� ����
       }

    } // ���� � ������� ����� ����������� ��� �������� ����
    return 0;
}
