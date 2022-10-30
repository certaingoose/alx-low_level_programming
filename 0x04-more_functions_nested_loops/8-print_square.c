/*
Write a function that prints a square, followed by a new line.

    Prototype: void print_square(int size);
    You can only use _putchar function to print
    Where size is the size of the square
    If size is 0 or less, the function should print only a new line
    Use the character # to print the square
*/

#include "main.h"

void print_square(int size)
{
    int i, c;

    for (i = 1; i <= size; i++)
    {
        for (c = 1; c <= size; c++)
        {
            _putchar('#');
            _putchar('\n')
        }
    }
}