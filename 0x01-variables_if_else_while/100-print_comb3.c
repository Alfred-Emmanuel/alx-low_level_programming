#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success/correct)
 */
int main(void)
{
int c, i;

for (c = '0'; c <= '9'; c++)
{
for (1 = '0'; 1 <= '9'; 1++)
{
if (c < 1)
{
putchar(c);
putchar(i);

if (c != '8' || (c == '8' && != '9'))
{
putchar(',');
putchar(' ');
}
}
}
}
putcharchar('\n');
return (0);
}
