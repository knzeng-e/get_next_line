#include "libft.h"

char	*ft_strmap(const char *s, char (*f)(char))
{
	char	*out;
	int		i;

	if (s && f)
	{
		i = 0;
		out = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
		if (out)
		{
			while (s[i])
			{
				out[i] = f(s[i]);
				i++;
			}
			out[i] = '\0';
		}
		return (out);
	}
	return (NULL);
}
