#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*mem;

	if (!(mem = (char *)malloc(sizeof(char) * size)))
		return (NULL);
	ft_bzero(mem, size);
	return (mem);
}
