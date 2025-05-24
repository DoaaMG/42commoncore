/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doaamabr <doaamabr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 17:24:32 by doaamabr          #+#    #+#             */
/*   Updated: 2025/05/21 14:52:09 by doaamabr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_size(long nb)
{
	size_t	size;

	size = 0;
	if (nb < 0)
	{
		nb = nb * (-1);
		size = 1;
	}
	if (nb == 0)
		size = 1;
	else
	{
		while (nb)
		{
			nb = nb / 10;
			size++;
		}
	}
	return (size);
}

char	*ft_itoa(int n)
{
	size_t	size;
	long	nb;
	char	*str;
	size_t	is_negative;

	size = count_size((long)n);
	str = malloc(size + 1);
	if (str == NULL)
		return (NULL);
	nb = (long)n;
	is_negative = 0;
	if (nb < 0)
	{
		nb = nb * (-1);
		str[0] = '-';
		is_negative = 1;
	}
	str[size] = '\0';
	while (size > is_negative)
	{
		str[size - 1] = nb % 10 + '0';
		nb = nb / 10;
		size--;
	}
	return (str);
}

/*char	*ft_itoa(int n)
{
	char			*str;
	unsigned int	nbr;
	unsigned int	len;
	unsigned int	tmp;

	nbr = (n < 0) ? -n : n;
	len = (n <= 0) ? 1 : 0;
	tmp = nbr;
	while (tmp && ++len)
		tmp /= 10;
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (len--)
	{
		str[len] = (nbr % 10) + '0';
		nbr /= 10;
		if (!nbr && n < 0)
			str[0] = '-';
	}
	return (str);
}
*/