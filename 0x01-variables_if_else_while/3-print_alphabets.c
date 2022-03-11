#include <stdio.h>
/**
 * main - print all in it
 *
 * Description: prints both lower and upper alp)?
 * Return: Returned value is 0
 */

int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
for (ch = 'A'; ch <= 'Z'; ch++)
{
putchar(ch);
}
putchar('\n');

return (0);

}
