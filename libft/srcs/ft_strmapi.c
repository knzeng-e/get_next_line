#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char				*out;
	unsigned int		i;

	if (s && f)
	{
		out = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
		i = 0;
		if (out)
		{
			while (s[i])
			{
				out[i] = f(i, s[i]);
				i++;
			}
			out[i] = '\0';
		}
		return (out);
	}
	return (NULL);
}
