/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-tuto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 14:46:06 by lle-tuto          #+#    #+#             */
/*   Updated: 2024/11/19 13:21:46 by lle-tuto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	sizing(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

static char	*new_string(char const *s, char *res, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len && s[i])
	{
		res[i] = s[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	size;
	char	*res;
	size_t	size_s;

	size_s = sizing(s);
	res = NULL;
	if (start >= size_s)
		return (ft_strdup(""));
	size = size_s - start;
	if (size < len)
		len = size;
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	new_string(&s[start], res, len);
	return (res);
}

/*#include <stdio.h>
int main()
{
	char s[] = "hola";
	unsigned int start = -1;
	size_t len = 0;
	char *res = ft_substr(s, start, len);
	printf(" - res = %s", res);
}*/
