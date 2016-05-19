#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	int	i;
	int	j;

	j = 0;
	while (dest[j])
		j++;
	i = -1;
	while (src[++i])
	{
		dest[j++] = src[i];
	}
	dest[j] = '\0';
	return (dest);
}
