/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doaamabr <doaamabr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 14:20:19 by doaamabr          #+#    #+#             */
/*   Updated: 2025/05/23 19:38:49 by doaamabr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*s1;

	s1 = (unsigned char *)s;
	while (n > 0)
	{
		*s1 = (unsigned char)c;
		s1++;
		n--;
	}
	return (s);
}
/*#include <stdio.h>

int	main(void)
{
	char str[10] = "abcdefghi";

	printf("%s\n", str);

	ft_memset(str, 'D', 5);

	printf("%s\n", str);

	return (0);
}*/