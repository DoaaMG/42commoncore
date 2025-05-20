/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doaamabr <doaamabr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 19:25:13 by doaamabr          #+#    #+#             */
/*   Updated: 2025/04/24 12:28:54 by doaamabr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_recursive_factorial(int nb)
{
    if (nb < 0)
        return (0);
    if  (nb > 1)
        return (nb * ft_recursive_factorial(nb-1));
    return (1);
}
#include <stdio.h>

int main()
{
    int nb;

    nb = -2;
    printf("%d\n",ft_recursive_factorial(nb));
    return (0);
}