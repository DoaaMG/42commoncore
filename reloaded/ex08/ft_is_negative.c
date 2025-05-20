/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doaamabr <doaamabr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 17:31:45 by doaamabr          #+#    #+#             */
/*   Updated: 2025/04/22 17:56:59 by doaamabr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_is_negative(int n)
{
    if (n < 0)
        write (1,"N",1);
    else
        write(1,"P",1);
}
int main()
{
    ft_is_negative(42);
    return(0);
}