/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namaloma <namaloma@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 12:58:49 by namaloma          #+#    #+#             */
/*   Updated: 2025/11/29 14:55:49 by namaloma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	srcl;
	size_t	dstl;
	size_t	i;

	srcl = ft_strlen(src);
	dstl = ft_strlen(dst);
	if (size <= dstl)
		return (srcl + size);
	i = 0;
	while (src[i] && ((dstl + i) < size - 1))
	{
		dst[dstl + i] = src[i];
		i++;
	}
	dst[dstl + i] = '\0';
	return (srcl + dstl);
}
