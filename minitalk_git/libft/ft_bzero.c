/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doaamabr <doaamabr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 11:37:37 by doaamabr          #+#    #+#             */
/*   Updated: 2025/05/23 19:37:26 by doaamabr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*dest;
	size_t			i;

	dest = s;
	i = 0;
	while (i < n)
	{
		dest[i] = 0;
		i++;
	}
	return ;
}
/*#include <stdio.h>

int	main(void)
{
	char str[] = "Hellobasabxapawaeihhd;";

	printf("%s\n", str);
	ft_bzero(str, 6);
	printf("%s\n", str);

	return (0);
}*/