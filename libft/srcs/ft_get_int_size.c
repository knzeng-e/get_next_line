#include "libft.h"

int	ft_get_int_size(int nb)
{
	int	i;

	i = 0;
	if (nb < 0)
	{
		nb = -nb;
		i++;
	}
	while (nb)
	{
		i++;
		nb = nb / 10;
	}
	return (i);
}
