/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doaamabr <doaamabr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 17:21:08 by doaamabr          #+#    #+#             */
/*   Updated: 2025/04/22 17:30:10 by doaamabr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_print_alphabet(void)
{
    write(1,"abcdefghijklmnopqrstuvwxyz",26);
}
int main()
{
    ft_print_alphabet();
    return(0);
}