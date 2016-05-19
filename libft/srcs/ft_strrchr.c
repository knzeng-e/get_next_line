#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		i;
	int		j;

	str = (char *)s;
	i = 0;
	j = -1;
	while (str[i])
	{
		if (str[i] == c)
			j = i;
		i++;
	}
	if (str[i] == c)
		j = i;
	if (j >= 0)
		return (str + j);
	return (NULL);
}
