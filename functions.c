#include <stdio.h>
#include <stdlib.h>

//Function that asks how many days were spent on the trip
int getDays(int days)
{
    a: printf("How many days were spent on the trip?\n");
    scanf("%d", &days);
    while(days < 1)
    {
        printf("Enter a number greater than 1.");
        goto a;
    }
    return days;
}