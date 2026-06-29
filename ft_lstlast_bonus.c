/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-tuto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 14:19:04 by lle-tuto          #+#    #+#             */
/*   Updated: 2024/11/22 15:29:57 by lle-tuto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*actuel;

	actuel = lst;
	if (actuel == NULL)
		return (actuel);
	while (actuel->next != NULL)
		actuel = actuel->next;
	return (actuel);
}

/*void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!(new))
		return ;
	if (!(*lst))
	{
		*lst = new;
		return ;
	}
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

#include"stdio.h"
int main()
{
	t_list	*il;
	t_list	*neige;
	t_list	*hihi;
	t_list	*start;
	t_list	*res;

	start = NULL;
	il = ft_lstnew("les");
	neige = ft_lstnew("gros");
	hihi = ft_lstnew("flocons");
	ft_lstadd_front(&il, start);
	ft_lstadd_front(&neige, il);
	ft_lstadd_front(&hihi, neige);
	res = ft_lstlast(il);

	printf("%s\n", (char *)res->content);

    return 0;
}*/
