#include "libft.h"

static int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char		*ft_strrev(char *str)
{
	int		i;
	int		j;
	char	*out;

	i = ft_len(str);
	out = (char *)malloc(sizeof(char) * i);
	if (out)
	{
		j = 0;
		out[i] = '\0';
		while (--i >= 0)
			out[i] = str[j++];
	}
	return (out);
}
