/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namaloma <namaloma@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 17:15:57 by namaloma          #+#    #+#             */
/*   Updated: 2025/11/29 12:57:33 by namaloma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"



static int	get_digits(int num)
{
	int digits;

	digits = 1;
	while (num / 10 > 0)
	{
		digits ++;
		num /= 10;
	}
	return (digits);
}

static int	is_neg(int num)
{
	if (num < 0)
		return (1);
	return (0);
}

char	*ft_itoa(int n)
{
	char	*a;
	int	digits;
	int	neg;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	neg = is_neg(n);
	if(neg)
		n *= -1;
	digits = get_digits(n);
	a = (char *)malloc(sizeof(char) * (digits + neg + 1));
	if (!a)
		return (NULL);
	a[digits + neg] = '\0';
	while (digits > 0)
	{
		a[digits + neg - 1] = (n % 10) + '0';
		n /= 10;
		digits --;
	}
	if (neg)
		a[0] = '-';
	return (a);
}

#include <stdio.h>

int main()
{
	char *n;
	n = ft_itoa(-2147483647);
	if (n == NULL)
	printf("null");
	else
		printf("-2147483648 = %s\n",n);
	return (0);
}
