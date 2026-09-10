/* Question:3
Write a C program that takes a distance in kilometers from the user and converts it to meters and centimeters.
(1 km = 1000 meters, 1 meter = 100 centimeters)
*/

#include <stdio.h>

int main()
{
    float km, meters, centimeters;

    printf("Enter distance in kilometers: ");
    scanf("%f", &km);

    meters = km * 1000;
    centimeters = meters * 100;

    printf("\nDistance in meters = %.2f\n", meters);
    printf("Distance in centimeters = %.2f\n", centimeters);

    return 0;
}