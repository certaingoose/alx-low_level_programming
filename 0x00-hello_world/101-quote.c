/*
Write a C program that prints exactly and that piece of art is useful" - Dora Korpar, 2015-10-19, followed by a new line, to the standard error.

    You are not allowed to use any functions listed in the NAME section of the man (3) printf or man (3) puts
    Your program should return 1
    Your program should compile without any warnings when using the -Wall gcc option
*/

#include <unistd.h>

int main(void)
{
    char artisusf[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    write(1, artisusf, 60);
    return (1);
}