#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*out;
	unsigned int	i;

	if (s == NULL)
		return (NULL);
	out = (char *)malloc(sizeof(char) * len + 1);
	if (out)
	{
		i = 0;
		while (len--)
		{
			out[i] = s[start + i];
			i++;
		}
		out[i] = '\0';
	}
	return (out);
}
