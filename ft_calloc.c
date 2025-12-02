#include <stdio.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*res;
	size_t	total;

	if (nmemb != 0 && (nmemb * size) / nmemb != size)
		return (NULL);
	total = nmemb * size;
	if (total == 0)
		total = 1;
	res = malloc(total);
	if (! res)
		return (NULL);
	ft_bzero (res, total);
	return (res);
}
