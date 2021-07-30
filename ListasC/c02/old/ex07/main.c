#include <unistd.h>
#include <stdio.h>

char *ft_strupcase(char *str);


int		main(void)
{
	char source[] = "Source string.";
	char destin[] = "Destination string.";
	char *dest;

	printf("BEFORE\n\tsrc: %s\n", destin);

    dest = ft_strupcase(destin);

	printf("AFTER\n\tsrc: %s\n", dest);
	return (0);
}