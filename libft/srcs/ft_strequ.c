#include "libft.h"

int	ft_strequ(const char *s1, const char *s2)
{
	if (s1 && s2)
		return (ft_strcmp(s1, s2) == 0);
	return ((s1 != NULL) - (s2 != NULL));
}
