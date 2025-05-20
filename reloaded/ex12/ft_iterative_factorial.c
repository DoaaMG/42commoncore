/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doaamabr <doaamabr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 18:48:33 by doaamabr          #+#    #+#             */
/*   Updated: 2025/04/22 19:17:34 by doaamabr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_iterative_factorial(int nb)
{
    int i;
    int result;

    i = 1;
    result = 1;
    if (nb < 0)
        return(0);
    while (i <= nb)
         result = result * i++;
    return (result);

}
#include <stdio.h>

int main()
    {
        int nb;
        nb  = 7;
        printf("%d\n", ft_iterative_factorial(nb));
        return(0);
    }

