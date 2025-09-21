/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doaamabr <doaamabr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 12:54:10 by doaamabr          #+#    #+#             */
/*   Updated: 2025/05/22 20:36:56 by doaamabr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*temp;
	size_t			i;

	i = 0;
	if (count != 0 && size > (size_t) - 1 / count)
		return (NULL);
	temp = malloc(size * count);
	if (!temp)
		return (NULL);
	while (i < count * size)
	{
		temp[i] = 0;
		i++;
	}
	return (temp);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char *str = ft_calloc(-5, 2);

// 	if (str)
// 		printf("%d\n", str[0]);
// 	else
// 		printf("Erreur d'allocation\n");

// 	return (0);

// }