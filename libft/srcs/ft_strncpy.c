#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, unsigned int n)
{
	unsigned	int cpt;

	cpt = 0;
	while ((cpt < n) && (src[cpt] != '\0'))
	{
		dest[cpt] = src[cpt];
		cpt++;
	}
	while (cpt < n)
	{
		dest[cpt] = '\0';
		cpt++;
	}
	return (dest);
}
