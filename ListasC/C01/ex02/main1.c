#include <stdio.h>

int main (void)
{
	int d;
	int u;
	d = 7856785672;
	u = 4957895789;
	int *a = &d;
	int *b = &u;
	ft_swap(a, b);
	printf("%i", d);
	printf("%i", u);
	return (0);
}
