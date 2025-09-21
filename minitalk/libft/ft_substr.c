/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doaamabr <doaamabr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 14:34:21 by doaamabr          #+#    #+#             */
/*   Updated: 2025/05/23 19:43:24 by doaamabr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	s_len;
	char	*dest;

	s_len = ft_strlen(s);
	if (start >= s_len)
	{
		dest = ft_strdup("\0");
		return (dest);
	}
	if (len > s_len - start)
		len = s_len - start;
	i = 0;
	dest = malloc(len + 1);
	if (!dest)
		return (NULL);
	while (i < len && s[start + i] != '\0')
	{
		dest[i] = s[start + i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
#include <stdio.h>

int main ()
{
	printf("%s\n", ft_substr("Salut Tchoupi", 1, 5));
	return (0);
}*/
