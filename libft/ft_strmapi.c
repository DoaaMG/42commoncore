/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doaamabr <doaamabr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 17:00:23 by doaamabr          #+#    #+#             */
/*   Updated: 2025/05/23 19:41:29 by doaamabr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*dest;
	size_t	len;

	len = ft_strlen((char *)s);
	i = 0;
	if (!s)
		return (NULL);
	dest = malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	while (s[i] != '\0')
	{
		dest[i] = f(i, s[i]);
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// #include <stdio.h>

// char	f(unsigned int i, char c) {return ( c + i);}

// int	main(void)
// {
// 	printf("%s\n", ft_strmapi("abc", f));
// 	return (0);
// }