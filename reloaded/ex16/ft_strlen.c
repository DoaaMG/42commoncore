/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doaamabr <doaamabr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 13:49:07 by doaamabr          #+#    #+#             */
/*   Updated: 2025/04/24 14:10:06 by doaamabr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int  ft_strlen(char *str)
{
    int i;

    i  = 0;
    while (str[i] != '\0')
    {
        i++;
    }
 return (i);
}
#include <stdio.h>
int main()
{
    printf("%d\n", ft_strlen("saalam\n"));
    printf("%d\n", ft_strlen("bouh\n"));
    printf("%d\n", ft_strlen(""));
    return (0);
}