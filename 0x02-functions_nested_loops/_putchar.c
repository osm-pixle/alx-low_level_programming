#include "main.h"
#include <unistd.h>
/**
 * _putcharc-writes the charachter c to stdout
 * @c The charachter to print
 *
 * Return: On success 1.
 * On error,-1 is returned, and errno is set apprpriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
