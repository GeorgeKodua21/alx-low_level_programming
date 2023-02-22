#include <stdio.h>
/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (success)
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
while (c <= 'Z')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
