/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namaloma <namaloma@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 14:58:17 by namaloma          #+#    #+#             */
/*   Updated: 2025/12/03 16:09:20 by namaloma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(const char *str, char c);

static char	*malloc_word(const char *str, char c)
{
	char	*word;
	size_t	i;

	i = 0;
	while (str[i] && (str[i] != c))
		i++;
	word = (char *)malloc(sizeof(char) *(i + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != c)
	{
		word[i] = str[i];
		i ++;
	}
	word[i] = '\0';
	return (word);
}

static size_t	count_words(const char *str, char c)
{
	size_t	len;

	len = 0;
	while (*str)
	{
		while (*str && *str == c)
			str++;
		if (*str && *str != c)
		{
			len ++;
			while (*str && *str != c)
				str++;
		}
	}
	return (len);
}

char	**ft_split(const char *str, char c)
{
	char	**splitted;
	size_t	i;

	splitted = (char **)malloc(sizeof(char *) * (count_words(str, c) + 1));
	if (!splitted)
		return (NULL);
	i = 0;
	while (*str)
	{
		while (*str && *str == c)
			str++;
		if (*str && *str != c)
		{
			splitted[i] = malloc_word(str, c);
			if (!splitted[i])
				return (NULL);
			i++;
			while (*str && *str != c)
				str++;
		}
	}
	splitted[i] = NULL;
	return (splitted);
}
