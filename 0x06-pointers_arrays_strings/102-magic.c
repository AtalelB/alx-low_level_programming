#include <stdio.h>
/**
 * main - you are not allowed to use a
 *
 * Return: Always 0
 */
int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;

	p[5] = 98;

	printf("a[2] = %d\n", p[5]);

	return (0);
}
