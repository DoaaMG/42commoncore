/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doaamabr <doaamabr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 12:27:27 by doaamabr          #+#    #+#             */
/*   Updated: 2025/04/26 13:14:50 by doaamabr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int i;
	
	if (min >= max)
		return (NULL);

	tab = malloc(sizeof(int) * (max - min));
	if (tab == NULL)
		return (NULL);
	 
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}
int	main()
{
	int	i;
	int	min;
	int	max;

	min = -45;
	max = 43;
	i = 0;
	
	int	*tab;
	
	tab = ft_range(min, max);

	while (i < (max - min))
	{
		printf("%d", tab[i]);
		i++;
	}
	return (0);
}