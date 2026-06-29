/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-tuto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 11:47:06 by lle-tuto          #+#    #+#             */
/*   Updated: 2024/11/21 14:15:53 by lle-tuto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*actuel;
	int		count;

	count = 0;
	actuel = lst;
	while (actuel != NULL)
	{
		actuel = actuel->next;
		count++;
	}
	return (count);
}

/*void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!(new))
		return ;
	if (!(*lst))
		*lst = new;
	new->next = *lst;
	*lst = new;
}

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
int main()
{
	t_list	*il;
	t_list	*neige;
	t_list	*hihi;
	t_list	*start;
	int		size;

	start = NULL;
	il = ft_lstnew("les");
	neige = ft_lstnew("gros");
	hihi = ft_lstnew("flocons");
	ft_lstadd_front(&il, start);
	ft_lstadd_front(&neige, il);
	ft_lstadd_front(&hihi, neige);
	size = ft_lstsize(il);
	printf("size = %i\n", size);
    return 0;
}*/
