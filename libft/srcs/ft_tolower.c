#include "libft.h"

int	ft_tolower(int c)
{
	if (c <= 'Z' && c >= 'A')
		c += 'a' - 'A';
	return (c);
}
