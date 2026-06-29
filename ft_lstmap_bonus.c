/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-tuto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 14:19:38 by lle-tuto          #+#    #+#             */
/*   Updated: 2024/11/24 16:47:18 by lle-tuto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*static void	ft_bip_boop(void *s)
{
	unsigned char	*sstr;

	sstr = (unsigned char *)s;
	sstr[0] = '9';
}*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*actuel;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	result = NULL;
	while (lst)
	{
		content = f(lst->content);
		actuel = ft_lstnew(content);
		if (!actuel)
		{
			ft_lstclear(&result, del);
			del(content);
			return (NULL);
		}
		ft_lstadd_back(&result, actuel);
		lst = lst->next;
	}
	return (result);
}
/*#include <stdio.h>
int main()
{
	t_list	*il;
	t_list	*neige;
	t_list	*hihi;
	t_list	*start;

	start = NULL;
	il = ft_lstnew("les");
	neige = ft_lstnew("gros");
	hihi = ft_lstnew("flocons");
	ft_lstadd_front(&start, hihi);
	ft_lstadd_front(&start, neige);
	ft_lstadd_front(&start, il);

	printf("new = %s\n", (char*)ft_lstmap(start, ft_bip_boop, del));
    return 0;
}*/
