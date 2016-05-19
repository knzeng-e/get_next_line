#include "libft.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*list;
	int		i;
	size_t	l;

	list = NULL;
	i = 1;
	while (i < ac)
	{
		l = ft_strlen(av[i]) + 1;
		ft_lstadd(&list, ft_lstnew(av[i], l));
		i++;
	}
	return (list);
}
