#include <stdio.h>

int main()
{
    int user_menu_selection = 0;
    int account_number = 1;
    float amount = 0.0;
    float user_account[6] = {0,0,0,0,0,0};
    int user_account_selection = 0;
    const int MAX_NUMBER_OF_ACCOUNTS = 5;


    printf("Welcome to McFall World Bank\n");
    printf("\n");

    do
    {
        printf("\nPlease select from the following options: \n");
        printf("1. Open Account(five account limit)\n");
        printf("2. List Accounts\n");
        printf("3. Deposit\n");
        printf("4. Withdrawl\n");
        printf("5. Exit\n");

        printf("Your Selection: ");
        scanf("%d", &user_menu_selection);
        if (user_menu_selection == 5)
        {
            printf("Thank you for trusting McFall World Bank");
            return 0;
        }

    } while ((user_menu_selection < 1 || user_menu_selection > 5)); //|| (user_menu_selection < '0' || user_menu_selection > '9') );

    while (user_menu_selection != 5)
    {
        if (user_menu_selection == 1)
        {
            if (account_number <= MAX_NUMBER_OF_ACCOUNTS)
            {
            printf("\nOpen Account\n");
            printf("How much would you like to deposit into your new account?: ");
            scanf("%f", &amount);
                if (amount >= 0)
                {
                    user_account[account_number] += amount;
                    account_number++;
                } else
                {
                    printf("Account not opened please try again with a valid deposit amount.");
                }
                printf("\n");
            }
            else
            {
                printf("\nYou have reached the account limit\n Please contact support to remove any unwanted accounts\n");
            }

        }
        else if (user_menu_selection == 2)
        {
            printf("\nList of Accounts\n");
            if (account_number == 1)
            {
                printf("You have no accounts. If you wish to open one please choose option 1 from the menu.\n");
            }
            else
            {
                for (int i = 1; i < account_number; i++)
                {
                    printf("Account %d with $%.2f\n", i, user_account[i]);
                }
            }
        }
        else if (user_menu_selection == 3)
        {
            printf("\nDeposit\n");
            if (account_number == 1)
            {
                printf("\nYou have not yet opened an account \n If you wish to open an account \n"
                               "please choose option 1 from the menu.\n");
            }
            else
            {
                printf("Which account would you like to deposit to?: ");
                scanf("%d", &user_account_selection);
                if (user_account_selection >= account_number)
                {
                    printf("\nThat account does not yet exist.\n If you would like to create a new account \nplease select "
                                   "option 1 from the menu\n");
                }
                else
                {
                    printf("How much would you like to deposit?: ");
                    scanf("%f", &amount);
                    if (amount > 0)
                    {
                        user_account[user_account_selection] += amount;
                        printf("Your new account balance for account %d is $%.2f\n", user_account_selection,
                               user_account[user_account_selection]);
                    } else
                    {
                        printf("\nPlease try again and remember\nonly deposit a positive amount.\n");
                    }
                }
            }
        }
        else if (user_menu_selection == 4)
        {
            printf("\nWithdrawl\n");
            if (account_number == 1)
            {
                printf("\nYou have not yet opened an account \n If you wish to open an account \n"
                               "please choose option 1 from the menu.\n");
            }
            else
            {
                printf("Which account would you like to withdrawl from?: ");
                scanf("%d", &user_account_selection);
                if (user_account_selection >= account_number)
                {
                    printf("\nThat account does not yet exist.\n If you would like to create a new account \nplease select "
                                   "option 1 from the menu\n");
                }
                else
                {
                    printf("How much would you like to withdrawl?: ");
                    scanf("%f", &amount);
                    if (user_account[user_account_selection] < amount)
                    {
                        printf("\nYou do not have the funds to withdrawl that amount.\n"
                                       "Please choose another option or change the withdrawl amount.\n");
                    }
                    else if (amount > 0)
                    {
                        user_account[user_account_selection] -= amount;
                        printf("Your new account balance for account %d is $%.2f\n", user_account_selection,
                               user_account[user_account_selection]);
                    } else
                    {
                        printf("\nPlease try again and remember\nonly withdrawl a positive amount.\n");
                    }
                }
            }
        }
        else if(user_menu_selection == 5)
        {
            printf("Thank you for trusting McFall World Bank\n");
            printf("GoodBye");
        }
        else printf("That is not an option");

        printf("\nPlease select from the following options: \n");
        printf("1. Open Account(five account limit)\n");
        printf("2. List Accounts\n");
        printf("3. Deposit\n");
        printf("4. Withdraw\n");
        printf("5. Exit\n");

        printf("Your Selection: ");
        scanf("%d", &user_menu_selection);
        if (user_menu_selection == 5)
        {
            printf("Thank you for trusting McFall World Bank\n");
            printf("GoodBye");
        }
    } // end while


    getchar();
    return 0;
}