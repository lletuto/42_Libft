/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-tuto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:00:32 by lle-tuto          #+#    #+#             */
/*   Updated: 2024/11/20 13:31:14 by lle-tuto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t size)
{
	size_t			i;
	unsigned char	*sp1;
	unsigned char	*sp2;
	int				res;

	i = 0;
	res = 0;
	sp1 = (unsigned char *)s1;
	sp2 = (unsigned char *)s2;
	if (size == 0)
		return (0);
	while (i < size - 1)
	{
		if (sp1[i] != sp2[i])
		{
			res = (int)sp1[i] - (int)sp2[i];
			return (res);
		}
		i++;
	}
	res = (int)sp1[i] - (int)sp2[i];
	return (res);
}

/*#include <bsd/string.h>
#include <stdio.h>
int main()
{
	const char	*s1 = "abcdef";
	const char	*s2 = "abc\375xx";
	size_t len = 5;
	printf("%i\n", ft_memcmp(s1, s2, len));
	printf("%i", memcmp(s1, s2, len));
	return (0);
}*/
