#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	unsigned int	i;

	if (s && f)
	{
		i = 0;
		while (s[i])
		{
			f((s + i));
			i++;
		}
	}
}
