#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);
/*
int	main(void)
{
	int div;
	int mod;
	
	ft_div_mod (21,4, &div, &mod);
	printf ("%s",div);
	printf ("%s",mod);
	return (0);
}
*/
int main()
{    
    int div;
    int a = 21;
    int b = 4;
    int mod;
    int *pdiv = &div;
    int *pmod = &mod;

    ft_div_mod(a,b,pdiv,pmod);
    printf("%i ",div);
	printf("\n");
	printf("%i", mod);
    return (0);
}
