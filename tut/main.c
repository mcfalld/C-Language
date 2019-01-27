#include <stdio.h>
#include "IO.h"

int main()
{
  const int MAX = 10000;
  char user_input[MAX];

  for (int j = 0; j < MAX; ++j)
  {
    user_input[j] = 0;
  }

  printf("Please enter an english phrase translate into tut: \n");

get_string(user_input, MAX);
//printf("%s", user_input);
  add_null_char(user_input);
  for (int i = 0; i < MAX; ++i)
  {
      if (isConsonant(user_input[i]))
      {
        printf("%cut", user_input[i]);
      } else
      {
        printf("%c", user_input[i]);
      }
  }
  return 0;
}