#include "libft.h"

void    ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!*lst)
    {
        lst -> next = new;
        return ;
    }
    ft_lstlast(*lst) -> next = new;
}
