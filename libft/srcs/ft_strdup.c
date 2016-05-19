#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*out;
	int		i;

	out = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1);
	i = -1;
	if (out == NULL || s1 == NULL)
		return (NULL);
	while (s1[++i])
		out[i] = s1[i];
	out[i] = '\0';
	return (out);
}
