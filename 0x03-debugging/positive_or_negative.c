#include "main.h"
#include <stdio.h>

/**
 * positive_or_negative - tests function that prints if integer is positive or negative
 * Return: 0
 */

void positive_or_negative(int num)
{
    if (num >0) {
        printf("%d is positive\n", num);
    } else if (num <0)
    {
     printf("%d is negative\n", num);   
    }else {
        printf("%d is zero\n", num);
    }
}