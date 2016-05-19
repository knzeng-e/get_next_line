#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int		i;
	int		j;
	size_t	size_find;
	size_t	size_str;

	size_str = ft_strlen(big);
	size_find = ft_strlen(little);
	if (!(*little))
		return ((char *)big);
	j = 0;
	while (j <= (int)(size_str - size_find))
	{
		i = 0;
		while ((i < (int)(size_find - 1)) && (big[i + j] == little[i]))
			++i;
		if (big[i + j] == little[i])
			return ((char *)&big[j]);
		++j;
	}
	return (NULL);
}
