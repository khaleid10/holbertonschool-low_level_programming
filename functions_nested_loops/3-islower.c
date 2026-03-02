#include "main.h"

int _islower(int c);

int _islower(int c)
{
    if (c >= 'a' && c <= 'z')
        return (1);
    return (0);
}
#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: The character to check
 *
 * Return: 1 if lowercase, 0 otherwise
 */

int _islower(int c)
{
    if (c >= 'a' && c <= 'z')
        return (1);
    else
        return (0);
}
