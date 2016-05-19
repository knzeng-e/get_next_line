#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	int		i;

	str = (char *)s;
	i = -1;
	while (s[++i])
	{
		if (s[i] == (unsigned char)c)
			return (str + i);
	}
	if (s[i] == (unsigned char)c)
		return (str + i);
	return (NULL);
}
