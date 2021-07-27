void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tempd;
	int	tempm;

	if (*b != 0)
	{
		tempd = *a / *b;
		tempm = *a % *b;
		tempd = &a;
		tempm = &b;
	}
}
