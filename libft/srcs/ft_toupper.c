#include "libft.h"

int	ft_toupper(int c)
{
	if (c <= 'z' && c >= 'a')
		c -= 'a' - 'A';
	return (c);
}
