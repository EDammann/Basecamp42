#include <unistd.h>
#include <stdio.h>

char	*ft_strcapitalize(char *str);


int		main(void)
{
	char source[] = "Source string.";
	char destin[] = "dest1nation string/d :w ?d [g _d |a 5f";
	char *dest;

	printf("BEFORE\n\tsrc: %s\n", destin);

    dest = ft_strcapitalize(destin);

	printf("AFTER\n\tsrc: %s\n", dest);
	return (0);
}