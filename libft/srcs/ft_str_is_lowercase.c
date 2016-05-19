#include "libft.h"

int	ft_str_is_lowercase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(ft_is_low(str[i])))
			return (0);
		i++;
	}
	return (1);
}
