#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*rend;
	t_list	*tmp;

	new = NULL;
	rend = NULL;
	while (f && lst)
	{
		tmp = (*f)(lst);
		if (!(new))
		{
			new = ft_lstnew(tmp->content, tmp->content_size);
			rend = new;
			new->next = NULL;
		}
		else
		{
			new->next = ft_lstnew(tmp->content, tmp->content_size);
			new = new->next;
			new->next = NULL;
			tmp = NULL;
		}
		lst = lst->next;
	}
	return (rend);
}
