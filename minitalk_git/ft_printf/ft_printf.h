/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doaamabr <doaamabr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 13:25:25 by doaamabr          #+#    #+#             */
/*   Updated: 2025/08/26 17:43:27 by doaamabr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_conversion(const char *str, va_list args);
int	ft_printf(const char *format, ...);
int	ft_putchar(char c);
int	ft_putnbr(long n);
int	ft_putnbr_unsigned(unsigned int n);
int	ft_puthexa(unsigned int nb, const char format);
int	ft_putptr(void *ptr);
int	ft_putnbr_base(unsigned long nb, char *base);
int	ft_print_string(va_list ap);
#endif