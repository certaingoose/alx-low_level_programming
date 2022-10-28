/*
Write a function that prints the numbers, from 0 to 9, followed by a new line.

    Prototype: void print_numbers(void);
    You can only use _putchar twice in your code
*/

#include "main.h"

void print_numbers(void)
{
    int num = 0;
    do
    {
        putchar(num + 48);
        num++;
    } while (num >= 0 && num <= 9);
    putchar('\n');
};