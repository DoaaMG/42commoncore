/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doaamabr <doaamabr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 16:37:04 by doaamabr          #+#    #+#             */
/*   Updated: 2025/08/31 18:24:27 by doaamabr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static char	*add_char(char *str, char c, size_t *len)
{
	char	*new_str;
	size_t	i;

	new_str = malloc(sizeof(char) * (*len + 2));
	if (!new_str)
		return (NULL);
	i = 0;
	while (i < *len)
	{
		new_str[i] = str[i];
		i++;
	}
	new_str[i++] = c;
	new_str[i] = '\0';
	free(str);
	(*len)++;
	return (new_str);
}

static void	i_msg(char **str, char c, size_t *len)
{
	char	*tmp;

	if (c == '\0')
	{
		if (*str)
		{
			ft_printf("%s\n", *str);
			free(*str);
		}
		*str = NULL;
		*len = 0;
	}
	else
	{
		tmp = add_char(*str, c, len);
		if (!tmp)
		{
			ft_putstr_fd("[ERROR] Malloc failed\n", 2);
			exit(1);
		}
		*str = tmp;
	}
}

static void	signal_handler(int sig)
{
	static char		*str = NULL;
	static int		bit = 0;
	static int		c = 0;
	static size_t	len = 0;

	if (sig == SIGUSR1)
		c |= (1 << (7 - bit));
	bit++;
	if (bit == 8)
	{
		i_msg(&str, c, &len);
		bit = 0;
		c = 0;
	}
}

int	main(void)
{
	ft_printf("Server PID : %d\n", getpid());
	signal(SIGUSR1, signal_handler);
	signal(SIGUSR2, signal_handler);
	ft_printf("Waiting for signals...\n");
	while (1)
		pause();
	return (0);
}
