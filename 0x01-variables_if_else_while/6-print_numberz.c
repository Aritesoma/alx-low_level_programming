#include <stdio.h>
/**
 * main - Outputs all in it
 *
 * Description: Printing 0-9 usinf specials
 * Return: Valued at 0
 */
int main(void)
{
int n;

for (n = 0; n < 10; n++)
{
putchar(n + '0');
}
putchar('\n');

return (0);

}
