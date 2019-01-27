#include <stdio.h>

int main( void )
{
    int starting_stones;
    int first_player;
    int user_stones;
    int computer_stones = 0;
    int play_again;

    printf("How many stones would you like to start with? ");
    scanf("%d", &starting_stones);

    while (starting_stones <= 0)
    {
        printf("Please enter a valid positive number. \nHow many stones would you like to start with? ");
        scanf("%d", &starting_stones);
    }

    int remaining_stones = starting_stones;

    do
    {
        printf("Who would you like to go first? (0 for computer, 1 for user): ");
        scanf("%d", &first_player);
    } while (first_player > 1 || first_player < 0);


    if (first_player == 0)
    {
        while (remaining_stones > 0)
        {
            if (remaining_stones % 3 == 0)
                computer_stones = 2;
            else if (remaining_stones % 3 == 1)
                computer_stones = 1;
            else if (remaining_stones % 3 == 2)
                computer_stones = 1;

            printf("The computer takes %d stones\n", computer_stones);
            remaining_stones -= computer_stones;

            if (remaining_stones <= 0)
            {
                printf("Congrats, You Win!!\n");
                break;
            }
            printf("%d stones remain, How many would you like to take? ", remaining_stones);
            scanf("%d", &user_stones);
            while (user_stones < 1 || user_stones > 2)
            {
                printf("Please choose either 1 or 2 stones only: ");
                scanf("%d", &user_stones);
            }
            remaining_stones -= user_stones;

            if (remaining_stones <= 0)
                printf("Sorry!! You Lose!\n");
        }
    }

    else if (first_player == 1)
    {
        while (remaining_stones > 0)
        {
            printf("%d stones remain, How many would you like to take? ", remaining_stones);
            scanf("%d", &user_stones);
            while (user_stones<1 || user_stones>2)
            {
                printf("Please choose either 1 or 2 stones only: ");
                scanf("%d", &user_stones);
            }
            remaining_stones -= user_stones;

            if (remaining_stones <= 0)
            {
                printf("Sorry!! You Lose!\n");
                break;
            }

            if (remaining_stones % 3 == 0)
                computer_stones = 2;
            else if (remaining_stones % 3 == 1)
                computer_stones = 1;
            else if (remaining_stones % 3 == 2)
                computer_stones = 1;

            printf("The computer takes %d stones\n", computer_stones);
            remaining_stones -= computer_stones;

            if (remaining_stones <= 0)
                printf("Congrats, You Win!!\n");
        }
    }

    printf("play again?(0 for no, 1 for yes) ");
    scanf("%d", &play_again);
    if (play_again == 1)
    {
        starting_stones = 0;
        first_player ;
        user_stones = 0;
        computer_stones = 0;
        play_again ;
        main();
    }
    else
    {
    printf("Goodbye");
    getchar();
    return 0;
    }
}