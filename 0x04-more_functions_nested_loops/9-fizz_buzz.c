#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints the numbers from 1 to 100
 * 3 multiples print Fizz instead of the number
 * 5 print Buzz instead of number
 * 3 & 5 print FizzBuzz
 * Return: Always 0
 */
int main(void)
{
	int i;
char f[] = "Fizz";
char b[] = "Buzz";
char fb[] = "FizzBuzz";

for (i = 1; i <= 100; i++)
{
	if (i == 100)
	{
		printf("%s ", b);
		printf(" ");
	}
else if ((i % 3 == 0) && (i % 5 == 0))
{
printf("%s ", fb);
printf(" ");
}
else if (i % 3 == 0)
	{
printf("%s ", f);
printf(" ");
}
else if (i % 5 == 0)
	{
printf("%s ", b);
printf(" ");
}
else
{
printf("%d ", i);
printf(" ");
}
}
printf("\n");
return (0);
}
