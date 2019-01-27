//
// Created by Derrick on 7/18/2017.
//

#include <stdio.h>
#include "../tut/IO.h"

int main()
{
  const int MAX = 10000;
  char user_input[MAX];

  initialize_arr_empty(user_input, MAX);
//  for (int j = 0; j < MAX; ++j)
//  {
//    user_input[j] = 0;
//  }
printf(user_input);
  printf("Please enter a tut phrase translate into English: \n");

  get_string(user_input, MAX);
  add_null_char(user_input);
  for (int i = 0; i < MAX; ++i)
  {
    if (isConsonant(user_input[i]))
    {
      int index = i+1;
      memmove(&user_input[index], &user_input[index + 2], strlen(user_input) - index);
      printf("%c", user_input[i]);
    } else
    {
      printf("%c", user_input[i]);
    }
  }
  return 0;
}