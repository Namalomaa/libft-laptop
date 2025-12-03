/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namaloma <namaloma@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 11:46:26 by namaloma          #+#    #+#             */
/*   Updated: 2025/12/03 14:56:01 by namaloma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_inset(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (i < ft_strlen(set))
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static size_t	get_start(char const *s1, char const *set, size_t start)
{
	while (s1[start])
	{
		if (ft_inset(s1[start], set))
			start++;
		else
			break ;
	}
	return (start);
}

static size_t	get_end(char const *s1, char const *set, size_t end)
{
	while (end > 0)
	{
		if (ft_inset(s1[end], set))
			end --;
		else
			break ;
	}
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	size_t	i;
	size_t	start;
	size_t	end;

	start = 0;
	if (ft_inset(s1[start], set))
		start = get_start(s1, set, start);
	end = ft_strlen(s1) - 1;
	if (ft_inset(s1[end], set))
		end = get_end(s1, set, end);
	trimmed = (char *)malloc(end - start + 1);
	if (!trimmed)
		return (NULL);
	i = 0;
	while (start < end)
	{
		trimmed[i] = s1[start];
		i ++;
		start ++;
	}
	trimmed[i] = '\0';
	return (trimmed);
}
