#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{

  int sides;
  int num_dice = 2;
// asks the user for a number and stores it in sides
  printf("How many sides would you like the dice to have?\n");
  scanf("%d", &sides);
  int possibilities[sides + 1][sides + 1];
  int totals[(sides * num_dice) + 1];
  int possibilities_total[(sides * num_dice) + 1];
  int number_of_rolls = 36000;
  int dice1[number_of_rolls];
  int dice2[number_of_rolls];
  srand((unsigned int) time(NULL));
//  int num = (rand( ) % sides) +1;

// initialize my arrays to 0
  for (int i = 0; i <= sides * num_dice; i++)
  {
    possibilities_total[i] = 0;
    totals[i] = 0;
  }
  for (int i = 0; i < sides + 1; ++i)
  {
    for (int j = 0; j < sides + 1; ++j)
    {
      possibilities[i][j]=0;
    }
  }
// set each point in the 2d array equal to x + y
  for (int x = 1; x <= sides; x++)
  {
    for (int y = 1; y <= sides; y++)
    {
      possibilities[x][y] = x + y;
    }
  }
// runs dice roller 36000 times for each dice, every time setting each element of the dice array equal to the random dice roll
// then adds the roll of each die together and increments that element of the totals array to keep track of how many of
// times each number was rolled....

    for (int i = 1; i < 36000; ++i)
    {
      dice1[i] = (rand( ) % sides) +1;
      dice2[i] = (rand( ) % sides) +1;
      totals[dice1[i] + dice2[i]]++;
    }

//  for (int i = 2; i <= sides * 2; ++i)
//  {
//      totals[dice1[i] + dice2[i]]++;
//  }
// keeps track of caclulated roll by adding x,y and using that as index number to increment total possibilities
// this tells me how many different ways each number can be rolled
  for (int x = 1; x <= sides; x++)
  {
    for(int y = 1; y <= sides; y++)
    {
      possibilities_total[possibilities[x][y]]++;
    }
  }
// prints out the number of ways each number can be achieved when rolling dice
//  for (int x = num_dice; x <= ((sides * num_dice)); x++)
//  {
//    printf("%d   %d\n", x, possibilities_total[x]);
//  }
//  printf("\n");

//   prints my table so i can see how many ways there are to get each number
//  for (int x = 1; x <= sides; x++)
//  {
//    for(int y = 1; y <= sides; y++)
//    {
//      printf("\t%d", possibilities[x][y]);
//    }
//      printf("\n");
//  }

  printf("number sides for your dice: %d\n", sides);
  printf("ROLL\tCALC\tACTUAL\n");
  for(int i = num_dice; i <= (sides*num_dice); i++)
  {
printf("%d\t\t%.2f\t%.2f\n", i, (possibilities_total[i]/(float)(sides*sides))*100, (totals[i]/(float)(36000))*100);
  }

  return 0;
}