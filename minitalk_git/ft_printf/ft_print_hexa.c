/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doaamabr <doaamabr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 19:42:16 by doaamabr          #+#    #+#             */
/*   Updated: 2025/05/31 09:44:35 by doaamabr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		write(1, &s[i++], 1);
	return (i);
}

int	ft_puthexa(unsigned int nb, const char format)
{
	int		count;
	char	*base;

	count = 0;
	if (format == 'X')
		base = "0123456789ABCDEF";
	if (format == 'x')
		base = "0123456789abcdef";
	if (nb < 16)
		count += ft_putchar(base[nb]);
	else
	{
		count += ft_puthexa(nb / 16, format);
		count += ft_putchar(base[nb % 16]);
	}
	return (count);
}

int	ft_putptr(void *ptr)
{
	int	count;

	if (!ptr)
		return (write(1, "(nil)\n", 5));
	count = 0;
	if (!ptr)
		return (ft_putstr("0x0"));
	count += ft_putstr("0x");
	count += ft_putnbr_base((unsigned long)ptr, "0123456789abcdef");
	return (count);
}

int	ft_putnbr_base(unsigned long nb, char *base)
{
	unsigned long	base_len;
	int				count;

	base_len = 0;
	count = 0;
	while (base[base_len])
		base_len++;
	if (nb < base_len)
		count += ft_putchar(base[nb]);
	else
	{
		count += ft_putnbr_base(nb / base_len, base);
		count += ft_putchar(base[nb % base_len]);
	}
	return (count);
}
