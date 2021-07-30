#include <unistd.h>
#include <stdio.h>

char *ft_strcpy(char *dest, char *src, unsigned int n);

int		main(void)
{
	char source[] = "Source string.";
	char destin[] = "Destination string.";
	char *dest;

	printf("BEFORE\n\tsrc: %s\n\tdes: %s\n", source, destin);

    dest = ft_strcpy(destin, source,5);

	printf("AFTER\n\tsrc: %s\n\tdes: %s\n", source, dest);
	return (0);
}