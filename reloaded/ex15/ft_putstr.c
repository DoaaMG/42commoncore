/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doaamabr <doaamabr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 13:37:19 by doaamabr          #+#    #+#             */
/*   Updated: 2025/04/24 13:48:34 by doaamabr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr(char *str)
{
    int i;
    i = 0;
    while(str[i] != '\0')
    {
        write (1, &str[i],1);
        i++;
    }
    return;
}
int main()
{
    ft_putstr("salam\n");
    ft_putstr("45\n");
    ft_putstr("");
    return (0);
}