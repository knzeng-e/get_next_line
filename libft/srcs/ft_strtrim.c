#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*output;
	int		i;
	int		start;
	int		cpt;

	if (!s)
		return (NULL);
	i = 0;
	while (ft_isspace(s[i]))
		i++;
	if (!(s[i]))
		return (ft_strdup(""));
	start = i;
	while (s[i])
		i++;
	while (ft_isspace(s[i - 1]))
		i--;
	if ((output = (char *)malloc(sizeof(char) * (i - start) + 1)))
	{
		cpt = 0;
		while (start < i)
			output[cpt++] = s[start++];
		output[cpt] = '\0';
	}
	return (output);
}
