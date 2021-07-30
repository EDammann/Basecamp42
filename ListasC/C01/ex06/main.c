#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str);
void	ft_putchar(char c);

int main()
{    
    char str;
	int l;

    l = ft_strlen("teste");
	ft_putchar(l + '0');
    
    return (0);
}
