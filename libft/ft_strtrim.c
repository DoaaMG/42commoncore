/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doaamabr <doaamabr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 11:10:16 by doaamabr          #+#    #+#             */
/*   Updated: 2025/05/23 19:43:04 by doaamabr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_in_set(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;
	char	*dest;
	size_t	i;

	start = 0;
	end = ft_strlen(s1);
	if (!s1 || !set)
		return (NULL);
	while (s1[start] && is_in_set(s1[start], set))
		start++;
	while (end > start && is_in_set(s1[end - 1], set))
		end--;
	len = end - start;
	dest = malloc(len + 1);
	if (!dest)
		return (NULL);
	i = 0;
	while (start < end)
		dest[i++] = s1[start++];
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	printf("%s\n", ft_strtrim ("   hello  ", "   d"));
	return (0);
}*/