#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (!(dest > src && src + n > dest))
		ft_memcpy(dest, src, n);
	else
		while (n--)
			*((char *)dest + n) = *((char *)src + n);
	return (dest);
}
