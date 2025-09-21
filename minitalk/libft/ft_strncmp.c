/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doaamabr <doaamabr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 20:28:46 by doaamabr          #+#    #+#             */
/*   Updated: 2025/05/23 19:41:50 by doaamabr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	s_2;
	unsigned char	s_1;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		s_1 = (unsigned char)s1[i];
		s_2 = (unsigned char)s2[i];
		if (s_1 != s_2)
			return (s_1 - s_2);
		i++;
	}
	return (0);
}
