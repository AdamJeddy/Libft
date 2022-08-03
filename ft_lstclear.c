#include "libft.h"

void    ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list      temp;

    if (!*lst)
        return ;
    temp = *lst;
    while (*lst)
    {
        lst = (*lst) -> next; 
        ft_lstdelone(temp, del);
        temp = *lst;
    }
    temp = NULL;
}