#include "libft.h"
#include "stdio.h"

int	ft_count_words(const char *s, char c)
{
	int		j;
	int		cpt;
	char	*str;

	str = (char *)s;
	cpt = 0;
	j = 0;
	while (str[j])
	{
		if (str[j] == c)
		{
			while (str[j] == c)
				j++;
		}
		else
		{
			cpt++;
			while (str[j] && str[j] != c)
				j++;
		}
	}
	return (cpt);
}
