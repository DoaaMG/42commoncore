/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doaamabr <doaamabr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 17:59:05 by doaamabr          #+#    #+#             */
/*   Updated: 2025/04/24 18:42:57 by doaamabr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int j;

    j = 1;
    if (argc < 2)
        return (0);
    while (argv[j])
    {
        i = 0;
       while (argv[j][i])
        {
            write(1,&argv[j][i], 1);
            i++;
        }
        write (1, "\n", 1);
        j++;
    }
    return (0);

}