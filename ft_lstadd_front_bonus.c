/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-tuto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 11:22:16 by lle-tuto          #+#    #+#             */
/*   Updated: 2024/11/22 15:04:28 by lle-tuto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	if (!(*lst))
	{
		*lst = new;
		return ;
	}
	new->next = *lst;
	*lst = new;
}

/*t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
#include <stdio.h>
int main()
{
	t_list	*il;
	t_list	*neige;
	t_list	*hihi;
	t_list	*start;
//	int		size;

	start = NULL;
	il = ft_lstnew("les");
	neige = ft_lstnew("gros");
	hihi = ft_lstnew("flocons");
	ft_lstadd_front(&start, hihi);
	ft_lstadd_front(&start, neige);
	ft_lstadd_front(&start, il);

	while (start)
	{
		printf("%s\n",(char *)start->content);
		start = start->next;
	}	
    return 0;
}*/
