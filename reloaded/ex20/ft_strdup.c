/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doaamabr <doaamabr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 19:17:35 by doaamabr          #+#    #+#             */
/*   Updated: 2025/04/26 12:25:22 by doaamabr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
    int	i;

    i = 0;
    while(str[i])
        i++;
    return (i);
}

char    *ft_strdup(char *src)
{
	char *dest;
	int	i;
	
	i = 0;
	dest = malloc(sizeof(char) * (ft_strlen(src)+ 1));
	if (dest == NULL)
		return(NULL);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
#include <string.h>
#include <stdio.h>

int	main()
{
	printf("%s\n", ft_strdup("salaaam"));
	return (0);
}