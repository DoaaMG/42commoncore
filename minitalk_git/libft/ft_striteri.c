/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doaamabr <doaamabr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 15:41:08 by doaamabr          #+#    #+#             */
/*   Updated: 2025/05/15 13:35:48 by doaamabr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
/*
int	main(void)
{
	char	str[] = "Salam";

	ft_striteri(str, to_upper);
	printf("%s\n", str);
	return (0);
}
#include <stdio.h>

void	to_upper(unsigned int i, char *c)
{
	(void)i;

	if (*c >= 'a' && *c <= 'z')
		*c -= 32;
}*/