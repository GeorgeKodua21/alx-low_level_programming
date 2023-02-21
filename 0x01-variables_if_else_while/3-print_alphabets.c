#include <stdio.h>
/**
 * main - Entry point
 * Description - 'output a sentence with pus'
 * Return - Always 0 (success)
 */
int main(void)
{
char n = 'a';
char c = 'A';
while (n <= 'z')
{
putchar(n);
n++;
}
while (c <= 'z')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
