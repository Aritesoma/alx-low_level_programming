#include <stdio.h>
/**
 * main - output all it contains
 *
 * Description: Prints all possible combinations of single-digit numbers
 * Return: Valued at 0
 */
int main(void)
{
int n = 0;
while (n < 10)
{
putchar(n + '0');
if (n < 9)
{
putchar(44);
putchar(32);
}
n++;
}
putchar('\n');

return (0);
}
