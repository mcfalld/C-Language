//
// Created by Derrick on 7/18/2017.
//

#ifndef TUT_IO_H
#define TUT_IO_H

#include <stdio.h>
#include <stdbool.h>

void get_string(char input[], int max)
{
  int x;
  char c = (char) getchar( );
  for( x = 0 ; (x < (max-1)) && (c != '\n') ; x++ )
  {
    input[x] = c; //*(input + x) = c;
    c = (char) getchar( );
  }

  input[x] = '\0';
}

void print_string( char * output_string)
{
  int x = 0;
  char output_char = output_string[x];
  while( output_char != '\0' )
  {
    putchar(output_char); //unbuffered output
    output_char = output_string[++x];
  }
}
bool isVowel(char ch)
{
//char ch;
bool value;

if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch =='o' || ch=='O' || ch == 'u' || ch == 'U')
value = true;
else
value = false;

return value;
}

bool isConsonant(char ch)
{
//char ch;
  bool value;

// ch == 'b' || ch == 'B' || ch == 'c' || ch == 'C' || ch == 'd' || ch == 'D' || ch =='f' || ch=='F' || ch == 'g' || ch == 'G' ||
//      ch == 'h' || ch == 'H' || ch == 'j' || ch == 'J' || ch == 'k' || ch == 'K' || ch =='l' || ch=='L' || ch == 'm' || ch == 'M' ||
//      ch == 'n' || ch == 'N' || ch == 'p' || ch == 'P' || ch == 'q' || ch == 'Q' || ch =='r' || ch=='R' || ch == 's' || ch == 'S' ||
//      ch == 't' || ch == 'T' || ch == 'v' || ch == 'V' || ch =='w' || ch=='W' || ch == 'x' || ch == 'X' ||
//      ch == 'y' || ch == 'Y' || ch == 'z' || ch == 'Z' || ch == 'v' || ch == 'V' || ch =='w' || ch=='W' || ch == 'x' || ch == 'X' )

//    (ch >= 'a' || ch <= 'z') || (ch >= 'A' || ch <= 'Z') &&
//        !(ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' ||
//            ch == 'I' || ch =='o' || ch=='O' || ch == 'u' || ch == 'U')
  if ( ch == 'b' || ch == 'B' || ch == 'c' || ch == 'C' || ch == 'd' || ch == 'D' || ch =='f' || ch=='F' || ch == 'g' || ch == 'G' ||
      ch == 'h' || ch == 'H' || ch == 'j' || ch == 'J' || ch == 'k' || ch == 'K' || ch =='l' || ch=='L' || ch == 'm' || ch == 'M' ||
      ch == 'n' || ch == 'N' || ch == 'p' || ch == 'P' || ch == 'q' || ch == 'Q' || ch =='r' || ch=='R' || ch == 's' || ch == 'S' ||
      ch == 't' || ch == 'T' || ch == 'v' || ch == 'V' || ch =='w' || ch=='W' || ch == 'x' || ch == 'X' ||
      ch == 'y' || ch == 'Y' || ch == 'z' || ch == 'Z' || ch == 'v' || ch == 'V' || ch =='w' || ch=='W' || ch == 'x' || ch == 'X' )
  {
    value = true;
  }
  else
    value = false;

  return value;
}

void initialize_arr_zero(char arr[], size)
{
  for (int j = 0; j < size; ++j)
  {
    arr[j] = 0;
  }
}


#endif //TUT_IO_H
