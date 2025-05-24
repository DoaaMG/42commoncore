/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doaamabr <doaamabr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 17:09:56 by doaamabr          #+#    #+#             */
/*   Updated: 2025/05/22 20:55:32 by doaamabr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(const char *s, char c)
{
	int		count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i] == c && s[i] != '\0')
		i++;
	while (s[i] != '\0')
	{
		count++;
		while (s[i] != c && s[i] != '\0')
			i++;
		while (s[i] == c && s[i] != '\0')
			i++;
	}
	return (count);
}

static int	word_len(const char *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0' && s[len] != c)
	{
		len++;
	}
	return (len);
}

static char	*malloc_word(const char *s, char c)
{
	char	*dest;
	size_t	i;
	size_t	len;

	i = 0;
	len = word_len(s, c);
	dest = malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	while (s[i] != '\0' && s[i] != c)
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

static void	free_all(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	**tab;

	i = 0;
	j = 0;
	if (!s)
		return (0);
	tab = malloc(sizeof(char *) * (word_count(s, c) + 1));
	if (!tab)
		return (NULL);
	while (s[i] != '\0')
	{
		while (s[i] && s[i] == c)
			i++;
		while (s[i] != c && s[i])
		{
			tab[j] = malloc_word(&s[i], c);
			if (!tab[j++])
				return (free_all(tab), tab[j - 1] = NULL, NULL);
			while (s[i] != c && s[i] != '\0')
				i++;
		}
	}
	return (tab[j] = NULL, tab);
}

//  #include <stdio.h>

// int main(void)
//  {
//      char **result = ft_split(" HHELE E LELE LE", ' ');
//      int i = 0;

//      while (result && result[i])
//      {
//          printf("%s\n", result[i]);
//          free(result[i]);
//          i++;
//      }
//      free(result);
//      return (0);
// }
