/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmellado <jmellado@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 11:55:26 by jmellado          #+#    #+#             */
/*   Updated: 2024/11/15 12:47:49 by jmellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(char const *s, char c)
{
	size_t	in_word;
	size_t	count;

	in_word = 0;
	count = 0;
	while (*s)
	{
		if (*s != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
		{
			in_word = 0;
		}
		s++;
	}
	return (count);
}

static void	free_array(char **array)
{
	int	i;

	i = 0;
	while (array[i])
	{
		free(array[i]);
		i++;
	}
	free(array);
}

static char	**splitwords(char const *s, char c, char **array)
{
	size_t	i;
	size_t	h;
	size_t	start;

	i = 0;
	h = 0;
	start = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
		{
			array[h] = ft_substr(s, start, (i - start + 1));
			if (!array[h])
			{
				free_array(array);
				return (NULL);
			}
			h++;
		}
		if (s[i] == c && (s[i + 1] != c || s[i + 1] != '\0'))
			start = i + 1;
		i++;
	}
	array[h] = NULL;
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		words;

	words = count_word(s, c);
	split = malloc((words + 1) * sizeof(char *));
	if (split == NULL)
		return (NULL);
	split = splitwords(s, c, split);
	return (split);
}

/*int	main(void)
{
	char	**split;
	int		i;

	split = ft_split("He/llo/", '/');
	i = 0;
	while (split[i])99
	{
		printf("%s\n", split[i]);
		i++;
	}
	return (0);
}*/
