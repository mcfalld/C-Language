#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char * argv[])
{
  char clear[27];
  char cipher[27];

  if (argc > 5)
  {
    printf("Error usage. Too many arguments");
  } else if (argc < 5)
  {
    printf("Too few arguments.");
  } else
  {
    FILE *cipherFile = fopen(argv[1], "r");

    for (int i = 0; i < 28; ++i)
    {
      clear[i] = 0;
      cipher[i] = 0;
    }
    int i = 1;

    if (cipherFile)
    {
      while (fscanf(cipherFile, "%c %c\n", &clear[i], &cipher[i]) == 2)
        i++;
      for (int j = 1; j < 27; ++j)
      {
        if ((clear[j] == 0 || clear[j] == ' ') || (cipher[j] == 0 || cipher[j] == ' '))
        {
          printf("Your file is not formatted correctly");
          return 3;
        }
      }
    }
    else
    {
      printf("Please include a cipher file, or check your file path");
    }

    fclose(cipherFile);
  }

    if (strcmp(strlwr(argv[2]), "encrypt") == 0)
    {

      FILE *clearTextFile = fopen(argv[3], "r");
      if (!(clearTextFile))
      {
        printf("Could not open input file for reading. Please check your path.");
        return 4;
      }

      FILE *cipherTextFile = fopen(argv[4], "r");

      if (cipherTextFile)
      {
        printf("%s already exists\n", argv[4]);
        fclose(cipherTextFile);
        return 2;
      }
      //else
      {
        cipherTextFile = fopen(argv[4], "w");
      }

      char c;
      while ((c = (char) fgetc(clearTextFile)) != EOF)
      {
        for (int j = 1; j < 27; ++j)
        {
          if (toupper(c) == clear[j])
          {
            fputc(cipher[j], cipherTextFile);
          }

        }
        if (!(toupper(c) >= 'A' && toupper(c) <= 'Z'))
        {
          fputc(c, cipherTextFile);
        }
      }

      fclose(clearTextFile);
      fclose(cipherTextFile);
    }

    else if ((strcmp(strlwr(argv[2]), "decrypt") == 0))
    {

      FILE *cipherTextFile = fopen(argv[3], "r");
      if (!(cipherTextFile))
      {
        printf("Could not open input file for reading. Please check your path.");
        return 5;
      }

      FILE *clearTextFile = fopen(argv[4], "r");

      if (clearTextFile)
      {
        printf("%s already exists\n", argv[4]);
        fclose(clearTextFile);
        return 2;
      } //else
      {
        clearTextFile = fopen(argv[4], "w");
      }

      char c;
      while ((c = (char) fgetc(cipherTextFile)) != EOF)
      {
        for (int j = 1; j < 27; ++j)
        {
          if (toupper(c) == cipher[j])
          {
            fputc(clear[j], clearTextFile);
          }
        }
        if (!(toupper(c) >= 'A' && toupper(c) <= 'Z'))
        {
          fputc(c, clearTextFile);
        }
      }

      fclose(clearTextFile);
      fclose(cipherTextFile);
    }
    else
    {
      printf("please use keyword encrypt or decrypt");
    }

    printf("\n");
    return 0;

}