#include "main.h"
#include<string.h>
/**
 *_strcat - Concatenates(put together) the string pointed to by @src,
 *          to the end of the string pointed to by @dest.+ terminating null byt
 *          at the end
 * @dest: pointer to the string to be concatenated upon.
 * @src: pointer to source string to be appended to @dest.
 *
 * Return: A pointer to the destination string @dest.
 */

char *_strcat(char *dest, char *src)
{
    int i, j;
    int dest_len = strlen(dest);
    int src_len = strlen(src);

    for (i = dest_len, j = 0; i < dest_len + src_len; i++, j++)
    {
        dest[i] = src[j];
    }

    dest[dest_len + src_len] = '\0';

    return dest;
}
