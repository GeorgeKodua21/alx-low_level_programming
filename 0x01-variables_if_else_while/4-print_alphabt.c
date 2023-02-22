#include <stdio.h>
/**
 * main - Entry point
 * Description: 'the program's output'
 * Return: Always 0 (success)
 */
int main(void)
{
char n = 'a';
while (n <= 'z')
{
if (n == 'q' || n == 'e')
{
n++;
continue;
}
putchar(n);
n++;
}
putchar('\n');
return (0);
}
