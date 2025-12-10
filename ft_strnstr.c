/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namaloma <namaloma@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 09:32:54 by namaloma          #+#    #+#             */
/*   Updated: 2025/11/24 11:46:13 by namaloma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	pos;

	if (needle[0] == '\0')
		return ((char *)haystack);
	if (len == 0)
		return (NULL);
	pos = 0;
	while (haystack[pos] && (pos < len))
	{
		if (haystack[pos] == needle[0])
		{
			i = 1;
			while (needle[i] && (size_t)(pos + i) < len && haystack[pos + i]
				&& haystack[pos + i] == needle[i])
				i++;
			if (needle[i] == '\0')
				return ((char *)haystack + pos);
		}
		pos ++;
	}
	return (NULL);
}
