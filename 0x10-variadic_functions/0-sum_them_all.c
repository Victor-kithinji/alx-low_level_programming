#include <stdarg.h>
/**
 * sum_them_all - sums all arguments passed
 *
 * @n: number of arguments
 *
 * Return: sum of arguments
 */

int sum_them_all(const unsigned int n, ...)
{
    va_list args;
    va_start(args, n);
	if (n == 0){return (0);}

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += va_arg(args, int);
    }

    va_end(args);
    return sum;
}
