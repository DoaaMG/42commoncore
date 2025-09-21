/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doaamabr <doaamabr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 13:42:18 by doaamabr          #+#    #+#             */
/*   Updated: 2025/05/15 13:37:11 by doaamabr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - 32);
	}
	return (c);
}
/*#include <stdio.h>

int	main(void)
{
	char c = 'b';
	char d = 'A';

	printf("%c -> %c\n",c, ft_toupper(c));
	printf(" %c -> %c\n", d, ft_toupper(d));
	return (0);
}*/