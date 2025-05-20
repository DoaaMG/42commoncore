/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doaamabr <doaamabr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 12:47:36 by doaamabr          #+#    #+#             */
/*   Updated: 2025/04/24 13:47:21 by doaamabr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_sqrt(int nb)
{
    int i;

    
    if (nb <= 0)
        return (0);

    i = 1;
    while (i * i <= nb && i < 46341)
        i++;
    if (i * i ==  nb)
        return (i);
    return (0);
}
#include <stdio.h>
int  main()
{
    printf("%d\n",ft_sqrt(4));
    printf("%d\n",ft_sqrt(5));
    printf("%d\n",ft_sqrt(-2));
    return (0);
}