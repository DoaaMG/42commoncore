/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doaamabr <doaamabr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 16:08:59 by doaamabr          #+#    #+#             */
/*   Updated: 2025/04/24 17:04:21 by doaamabr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strcmp(char  *s1, char *s2)
{
    int i;
    i = 0;

    while (s1[i] != '\0' && s2[i] != '\0')
    {
        if (s1[i] == s2[i])
            i++;
        else
            return (s1[i] - s2[i]);
    }
    return (s1[i] - s2[i]);
}
#include <stdio.h>

int main()
{
    char *s1= "Bonjour";
    char *s2= "Bonrour";
    printf("%d\n", ft_strcmp(s1, s2));
    return (0);
}