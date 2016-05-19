#include "libft.h"

t_list	*ft_create_elem(void *data, size_t size_content)
{
	t_list	*list;

	list = NULL;
	list = (t_list*)malloc(sizeof(t_list));
	if (list)
	{
		list->content = ft_memalloc(size_content);
		list->content = data;
		list->content_size = size_content;
		list->next = NULL;
	}
	return (list);
}
