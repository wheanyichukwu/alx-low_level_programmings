#include <unistd.h>
/**
 *_putchar - write the character o to stdout
 *@c: the character tp print
 *Return: on success 1.
 *on error, -1 is returned, and error is set appropriately.
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
