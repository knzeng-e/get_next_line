#include "libft.h"

size_t	ft_strlcat(char *restrict dest, const char *restrict src, size_t size)
{
	size_t	size_dest;
	size_t	size_src;
	int		i;

	size_dest = (size_t)ft_strlen(dest);
	size_src = (size_t)ft_strlen(src);
	if (size_dest > size)
		return (size + size_src);
	i = 0;
	while ((src[i] != '\0') && (i + size_dest < size - 1))
	{
		dest[size_dest + i] = src[i];
		i++;
	}
	dest[size_dest + i] = '\0';
	return (size_dest + size_src);
}
