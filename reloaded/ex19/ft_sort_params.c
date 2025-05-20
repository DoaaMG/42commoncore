/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doaamabr <doaamabr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 18:45:37 by doaamabr          #+#    #+#             */
/*   Updated: 2025/04/25 19:05:55 by doaamabr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while(*s1 && *s1 == *s2 )
    {
        s1++;
        s2++;
    }
    return (*s1 - *s2);
}

void    ft_swap(char **a, char **b)
{
    int temp;

    temp = **a;
    **a = **b;
    **b = temp;
} 
int main(int argc,char **argv)
{
    int i;
    int j;

    i = 1;
    while( i < argc - 1)
    {
        if (ft_strcmp(argv[i], argv[i+1])> 0)
        {
            ft_swap(&argv[i], &argv[i+1]);
            i = 1;

        }
        else 
        i++;
    }

    j = 1;
    while(j < argc)
    {
        i = 0;
        while (argv[j][i])
        {
            write(1, &argv[j][i],1);
            i++;
        }
        write(1,"\n",1);
        j++;
    }
    return (0);

}