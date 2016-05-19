#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sign;
	int	number;
	int	i;

	number = 0;
	i = 0;
	while (ft_isspace(str[i]))
		i++;
	sign = (1 - 2 * (str[i] == '-'));
	if ((str[i] == '+') || (str[i] == '-'))
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		number *= 10;
		number += (str[i] - '0');
		i++;
	}
	return (sign * number);
}
