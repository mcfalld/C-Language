#include <stdio.h>

int main()
{
    int total = 0;
    double average;
    int user_input[10];

    printf("You will enter ten(10) integers to receive the total and average of them: \n");

    for (int i = 0; i < 10; i++)
    {
        printf("Please enter int %d: ", i + 1);
        scanf("%d", &user_input[i]);
    }

       for ( int i = 0 ; i <= 9  ; i++ )
     {
      total += user_input[i]; // this doesnt work and i could'nt figure out why.
      // is there a .length() or something similar in c language?
     }

    average = (total / 10.0); // i don't know why total here has to be cast to float or 10 needs a '.0'(10.0)
    // average is a float but when i divide total by an integer it doesn't work.
    // average has to be changed to a double to avoid the error / warning
    // that the values may not fit into the float 'average'
    printf("The total is: %d\n", total);
    printf("The average is: %.2f\n", average);
    return 0;
}