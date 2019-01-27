/*
 * Author: Derrick McFall
 * Date: 08Jun17
 * more exact: 670616629
 * what mine is: 670615200
 */
#include <stdio.h>

int main( void )
{
    const int light_speed_miles_per_second = 186282;
    const long light_speed = ((light_speed_miles_per_second * 60) * 60);
    int user_days;

    printf("Please enter a (whole) number of days: ");
    scanf("%d", &user_days);
    long long result = ((light_speed * 24) * user_days);
    printf("In a vacuum, light would travel %lld miles in %d days.", result, user_days);


    getchar();
    getchar();
    return 0; // end main
}