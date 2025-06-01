/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doaamabr <doaamabr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 15:56:31 by doaamabr          #+#    #+#             */
/*   Updated: 2025/05/30 21:10:10 by doaamabr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_conversion(const char *str, va_list args)
{
	if (*str == 's')
		return (ft_print_string(args));
	else if (*str == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (*str == 'd' || *str == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (*str == 'p')
		return (ft_putptr(va_arg(args, void *)));
	else if (*str == 'u')
		return (ft_putnbr_unsigned(va_arg(args, unsigned int)));
	else if (*str == 'x' || *str == 'X')
		return (ft_puthexa(va_arg(args, unsigned int), *str));
	else
		return (ft_putchar('%'));
}

int	ft_printf(const char *format, ...)
{
	int		count;
	int		i;
	va_list	args;

	i = 0;
	count = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			i++;
			count += ft_conversion(&format[i], args);
		}
		else
		{
			write(1, &format[i], 1);
			count += 1;
		}
		i++;
	}
	va_end(args);
	return (count);
}
/*#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	char *str = "Hello";
	char c = 'Z';
	int d = -42;
	unsigned int u = 123456;
	void *ptr = str;
	int hex = 48879;

	// Ton printf à toi ✨
	ft_printf("=== ft_printf ===\n");
	ft_printf("%% : %%\n");
	ft_printf("Char : %c\n", c);
	ft_printf("String : %s\n", str);
	ft_printf("Int : %d\n", d);
	ft_printf("Unsigned : %u\n", u);
	ft_printf("Hex lowercase : %x\n", hex);
	ft_printf("Hex uppercase : %X\n", hex);
	ft_printf("Pointer : %p\n", ptr);

	// Pour comparer avec le vrai printf 🔍
	printf("\n=== printf ===\n");
	printf("%% : %%\n");
	printf("Char : %c\n", c);
	printf("String : %s\n", str);
	printf("Int : %d\n", d);
	printf("Unsigned : %u\n", u);
	printf("Hex lowercase : %x\n", hex);
	printf("Hex uppercase : %X\n", hex);
	printf("Pointer : %p\n", ptr);

	return (0);
}*/
