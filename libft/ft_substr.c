/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doaamabr <doaamabr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 14:34:21 by doaamabr          #+#    #+#             */
/*   Updated: 2025/05/20 16:56:02 by doaamabr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*dest;

	if (!s)
		return (NULL);
	
	if (start >= ft_strlen(s))
		return (NULL);
	i = 0;
	dest = ((char *)malloc(len + 1));
	if (dest == NULL)
		return (NULL);
	while ()
	// while (i < len && s[start + i] != '\0')
	// {
	// 	dest[i] = s[start + i];
	// 	i++;
	// }
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
