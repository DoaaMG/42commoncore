/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doaamabr <doaamabr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 13:22:10 by doaamabr          #+#    #+#             */
/*   Updated: 2025/05/23 19:40:41 by doaamabr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	len1;
	size_t	len2;

	i = 0;
	len1 = ft_strlen((char *)dest);
	len2 = ft_strlen((char *)src);
	if (size <= len1)
		return (size + len2);
	while (src[i] && i < size - len1 - 1)
	{
		dest[len1 + i] = src[i];
		i++;
	}
	dest[len1 + i] = '\0';
	return (len1 + len2);
}
/*#include <stdio.h>
#include <string.h>

int	main (void)
{
	char dest[50] = "bouh";
	char src[] = "holakjanewedjnenfjnfcv";

	size_t result = ft_strlcat(dest, src, 12);

	printf("%zu\n",result);
	printf("%s\n", dest);
	return (0);

}*/
