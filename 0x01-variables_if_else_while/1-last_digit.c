#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Everything here exe
(*
 * Description: Printing last digit)?
 * Return: Returned value is 0
 */

int main(void)
{
int n, LastDigit;

srand(time(0));
n = rand() - RAND_MAX / 2;

scanf("%d", &n);
LastDigit = n % 10;

if (LastDigit > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, LastDigit);
}

else if (LastDigit == 0)
{
printf("Last digit of %d is %d and is 0\n", n, LastDigit);
}

else if (LastDigit < 6 && LastDigit != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, LastDigit);
}

return (0);
}