/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namaloma <namaloma@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 11:19:36 by namaloma          #+#    #+#             */
/*   Updated: 2025/12/03 11:44:10 by namaloma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	size_t	l1;
	size_t	l2;

	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	join = (char *)malloc(l1 + l2 + 1);
	if (!join)
		return (NULL);
	ft_memcpy(join, s1, l1);
	ft_memcpy(join + l1, s2, l2);
	join[l1 + l2] = '\0';
	return (join);
}
