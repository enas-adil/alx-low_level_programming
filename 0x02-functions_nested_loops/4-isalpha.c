#include "main.h"
/**
 * _isalpha - checks for lower
 * @c: letter ascii code
 * Return: send 1 for alphapatic
 * 0 otherwise
*/
int _isalpha(int c)
{
        if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
        {
                return (1);
        }
        else
        {
                return (0);
        }
}
