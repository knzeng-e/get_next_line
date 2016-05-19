#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	int		nb_words;
	int		j;
	char	**output;
	char	*str;

	if (!(s))
		return (NULL);
	str = (char *)s;
	nb_words = ft_count_words(s, c);
	if (!(output = (char **)malloc(sizeof(char *) * nb_words + 1)))
		return (NULL);
	j = 0;
	while (*str && *str == c)
		str++;
	while (j < nb_words)
	{
		ft_get_word(str, j, c, output);
		j++;
	}
	output[j] = 0;
	return (output);
}
