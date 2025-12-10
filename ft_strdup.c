/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namaloma <namaloma@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 09:32:54 by namaloma          #+#    #+#             */
/*   Updated: 2025/11/24 11:46:13 by namaloma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ds;
	size_t	i;
	size_t	len;

	len = 0;
	while (s[len])
	{
		len ++;
	}
	ds = (char *)malloc(sizeof (char) * (len + 1));
	if (!ds)
		return (NULL);
	i = 0;
	while (i < len)
	{
		ds[i] = s[i];
		i++;
	}
	ds [i] = '\0';
	return (ds);
}
