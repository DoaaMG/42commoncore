/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doaamabr <doaamabr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 14:02:39 by doaamabr          #+#    #+#             */
/*   Updated: 2025/05/15 13:37:03 by doaamabr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (c + 32);
	}
	return (c);
}
/*#include <stdio.h>

int	main(void)
{
	char c = 'b';
	char d = 'A';

	printf("%c -> %c\n",c, ft_tolower(c));
	printf(" %c -> %c\n", d, ft_tolower(d));
	return (0);
}*/