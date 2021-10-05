#include "main.h"
/**
 * main -  prints Holberton, followed by a new line
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
    char ch;

    for (ch = 'a'; ch <= 'z'; ch++)
    {
        _putchar(ch);
    }
    _putchar ('\n');
    

}