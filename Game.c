#include <stdio.h>

char square[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

void board()
{
    printf("  %c  |  %c  |  %c  \n", square[1], square[2], square[3]);
    printf("  %c  |  %c  |  %c  \n", square[4], square[5], square[6]);
    printf("  %c  |  %c  |  %c  \n", square[7], square[8], square[9]);
}

int check()
{
    if (square[1] == square[2] && square[2] == square[3])
        return 1;

    else if (square[4] == square[5] && square[5] == square[6])
        return 1;

    else if (square[7] == square[8] && square[8] == square[9])
        return 1;

    else if (square[1] == square[4] && square[4] == square[7])
        return 1;

    else if (square[2] == square[5] && square[5] == square[8])
        return 1;

    else if (square[3] == square[6] && square[6] == square[9])
        return 1;

    else if (square[1] == square[5] && square[5] == square[9])
        return 1;

    else if (square[3] == square[5] && square[5] == square[7])
        return 1;

    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' && square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7] != '7' && square[8] != '8' && square[9] != '9')
        return 0;
    else
        return -1;
}

int main()
{
    char player = 'X';
    int i;
    int choice;
    int move = 1;
    do
    {
        board();
        if (move % 2)
        {
            move = 1;
        }
        else
        {
            move = 2;
        }

        

        if (move == 1)
        {
            player = 'X';
        }
        else
        {
            player = 'O';
        }
        printf("Player %c: \n", player);
        scanf("%d", &choice);

        if (choice == 1 && square[1] == '1')
        {
            square[1] = player;
        }

        else if (choice == 2 && square[2] == '2')
        {
            square[2] = player;
        }

        else if (choice == 3 && square[3] == '3')
        {
            square[3] = player;
        }

        else if (choice == 4 && square[4] == '4')
        {
            square[4] = player;
        }

        else if (choice == 5 && square[5] == '5')
        {
            square[5] = player;
        }

        else if (choice == 6 && square[6] == '6')
        {
            square[6] = player;
        }

        else if (choice == 7 && square[7] == '7')
        {
            square[7] = player;
        }

        else if (choice == 8 && square[8] == '8')
        {
            square[8] = player;
        }

        else if (choice == 9 && square[9] == '9')
        {
            square[9] = player;
        }

        i = check();
        move++;

    } while (i == -1);

    board();
}
