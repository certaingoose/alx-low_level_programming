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
        _putchar(num + 48); //Undeclared Identifier error
        num++;
    } while (num >= 0 && num <= 9);
    _putchar('\n');
};