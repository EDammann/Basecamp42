void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_strlen(char *str)
{
	int	l;

	l = 0;
	while (*str != '\0')
	{
		l++;
		*str ++;
	}
	ft_putchar(l + '0');
}
