#include <unistd.h>
#include <stdio.h>

int ft_str_is_uppercase(char *str);


int		main(void)
{
	char source[] = "Source string.";
	char destin[] = "";
	char *dest;
	int r;

	//printf("BEFORE\n\tsrc: %s\n\tdes: %i\n", source, r);

    r = ft_str_is_uppercase(destin);

	printf("AFTER\n\tsrc: %s\n\tdes: %i\n", source, r);

	return (0);
}