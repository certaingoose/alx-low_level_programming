/*
Write a function that prints all natural numbers from n to 98, followed by a new line.

    Prototype: void print_to_98(int n);
    Numbers must be separated by a comma, followed by a space
    Numbers should be printed in order
    The first printed number should be the number passed to your function
    The last printed number should be 98
    You are allowed to use the standard library
*/

#include "main.h"

void print_to_98(int n)
{
    int count;
    if (n > 98)
        for (count = n; count > 98; count--)
        {
            printf("%d", count);
        }
    else
    {
        for (count = n; count < 98; count++)
        {
            printf("%d", count);
        }
        printf("98\n");
    }
}