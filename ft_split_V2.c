/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_V2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andtan <andtan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 16:42:06 by andtan            #+#    #+#             */
/*   Updated: 2024/06/13 00:44:14 by andtan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(const char *s, char c)
{
	size_t	count;
	int		is_word;

	is_word = 0;
	count = 0;
	while (*s)
	{
		if (*s != c && !is_word)
		{
			count++;
			is_word = 1;
		}
		else if (*s == c)
			is_word = 0;
		s++;
	}
	if (count == 0 && !is_word && *s == '\0')
		return (0);
	return (count);
}

static char	*next_word(const char **s, char c)
{
	const char	*start;
	size_t		len;
	char		*word;

	while (**s && **s == c)
		(*s)++;
	start = *s;
	while (**s && **s != c)
		(*s)++;
	len = *s - start;
	word = (char *)malloc(len + 1);
	if (!word)
		return (NULL);
	ft_memcpy(word, start, len);
	word[len] = '\0';
	return (word);
}

static void	free_split(char **split, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		free(split[i]);
		i++;
	}
	free(split);
}

char	**ft_split(const char *s, char c)
{
	size_t	word_count;
	char	**split;
	size_t	i;

	word_count = count_words(s, c);
	split = (char **)malloc(sizeof(char *) * (word_count + 1));
	i = 0;
	if (!s || !split)
		return (NULL);
	while (i < word_count)
	{
		split[i] = next_word(&s, c);
		if (!split[i])
			return (free_split(split, i), NULL);
		i++;
	}
	split[i] = NULL;
	return (split);
}
