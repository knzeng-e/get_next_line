#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *list;

	while (*alst)
	{
		list = *alst;
		ft_lstdelone(&list, del);
		*alst = (*alst)->next;
	}
	*alst = NULL;
}
