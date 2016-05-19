#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t				i;

	i = -1;
	while (++i < n)
	{
		*(char *)(dst + i) = *(char *)(src + i);
		if (*(char *)(dst + i) == c)
			return (char *)(dst + (i + 1));
	}
	return (NULL);
}
